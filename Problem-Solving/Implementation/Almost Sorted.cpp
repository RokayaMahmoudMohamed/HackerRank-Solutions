#define sz(s) (s.size())
void almostSorted(vector<int> a) {
    int n=sz(a);
        vector<int>b(n),c;
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        if (a == b)
        {
            cout << "yes\n";
            
        }
        else{
        int mn = 1e9, mx=0,cnt=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                mn = min(mn, i);
                mx = max(mx, i);
                c.push_back(a[i]);
                cnt++;
            }
        }
        if (cnt == 2)
        {
            cout << "yes\nswap " << mn+1 << " " << mx+1 << "\n";
        }
        else
        {
            bool ok = 0;
            for (int i = 0; i < sz(c)-1; i++)
            {
                if (c[i] < c[i + 1] + 1)ok = 1;
            }
            if (!ok)
                cout << "yes\nreverse " << mn+1 << " " << mx+1 << "\n";
            else
                cout << "no\n";
        }
        }
}
