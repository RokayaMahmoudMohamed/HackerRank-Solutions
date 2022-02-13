int fc(int m,int siz,vector<int>&a)
{
    int carry = 0;
    for (int i = 0; i < siz; i++)
    {
        int p = a[i] * m + carry;
        a[i] = p % 10;
        carry = p / 10;

    }
    while (carry)
    {
        a[siz] = carry % 10;
        carry /= 10;
        siz++;
    }
    return siz;
}
void extraLongFactorials(int n) {
    vector<int>v(1e6); int siz = 1; v[0] = 1;
    for (int i = 2; i <= n; i++)
    {
         siz = fc(i, siz, v);
    }
    for (int i = siz - 1; i >= 0; i--)cout << v[i];
}
