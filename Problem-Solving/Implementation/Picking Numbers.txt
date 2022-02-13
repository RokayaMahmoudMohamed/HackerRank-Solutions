#include <bits/stdc++.h>
#define ll long long
#define sz(s)  (s.size())
using namespace std;



int pickingNumbers(vector<int> a) {
        int n=a.size();

    vector<int>v,frq(109); int mx = 0;
    map<int, int>mp;
    for (int i = 0; i < n; i++)
    {
         cin >> a[i];
        if (mp[a[i]] < 1)v.push_back(a[i]);
        mp[a[i]]++;
        frq[a[i]]++;
       
    }
    sort(v.begin(), v.end());
    
    int ans = 0;
    for (int i = 0; i < sz(v)-1; i++)
    {
        
        if (abs(v[i] - v[i + 1]) <= 1)
            ans = max(ans, frq[v[i]] + frq[v[i + 1]]);

        else
            ans = max(ans, frq[v[i]]);
        
    }
    return  max(ans, frq[v[sz(v)-1]]);
   
}
