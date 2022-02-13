#include <bits/stdc++.h>
#define sz(s)  (s.size())
using namespace std;


string angryProfessor(int k, vector<int> a) {
    int n,cnt=0; n=sz(a);
    for(int i=0;i<n;i++)
    {
        if (a[i] <= 0)cnt++;
    }
    return (cnt<k ? "YES" : "NO");
}
