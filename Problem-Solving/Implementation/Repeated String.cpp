#define ll long long
#define sz(s)  (s.size())
long repeatedString(string s, long n) {
       

    ll a = 0;
    for (int i = 0; i < sz(s); i++)
        if (s[i] == 'a')a++;

    ll ans = a * (n / sz(s));

    if(n%sz(s)!=0)
    for (int i = 0; i < n % sz(s); i++)if (s[i] == 'a')ans++;

    return ans;
}
