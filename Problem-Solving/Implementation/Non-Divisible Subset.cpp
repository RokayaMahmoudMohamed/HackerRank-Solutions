int nonDivisibleSubset(int k, vector<int> s) {
         int n=s.size();
    vector<int>frq(109);
    for (int i = 0; i < n; i++)
    {
        frq[s[i] % k]++;
    }
     int ans = 0,m=k/2;
    if (k % 2 == 0 && frq[k / 2] != 0)ans++,m--;
    if (frq[0] != 0)ans++;
  
    for (int i = 1; i <=m; i++)
    {
        ans += max(frq[i], frq[k - i]);
    }
    return ans;
}
