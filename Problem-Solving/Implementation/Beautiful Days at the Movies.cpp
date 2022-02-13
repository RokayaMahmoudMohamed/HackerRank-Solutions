
int beautifulDays(int i, int j, int k) {
    int l=i, r=j;
    int cnt = 0;
    for (int i = l; i <= r; i++)
    {
        string s = to_string(i);
        int rev = 0, copy = i,siz=s.size()-1;
        while (copy)
        {
            rev += (copy % 10) * pow(10, siz);
            copy /= 10;
            siz--;

        }
        if (abs(rev - i) % k == 0)cnt++;
    }
    return cnt;
}
