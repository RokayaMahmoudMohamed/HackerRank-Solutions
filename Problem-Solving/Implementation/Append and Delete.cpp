#include <bits/stdc++.h>
#define  ll long long
#define sz(s) (s.size())
string appendAndDelete(string s, string t, int k) {
    int indx=0;
    for (int i = 0; i < min(sz(t),sz(s)); i++)
    {
        if (s[i] == t[i])
        {
            indx = i + 1;

        }
        else break;
    }

    
   
    return (((sz(s)+sz(t) - (2*indx)<= k && (sz(s) + sz(t) - (2 * indx)) % 2 == k % 2)|| (sz(s) + sz(t) <= k))?"Yes":"No");
}
