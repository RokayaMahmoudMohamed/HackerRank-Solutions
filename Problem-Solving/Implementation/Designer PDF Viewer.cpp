#include <bits/stdc++.h>
#define ll long long
#define sz(s)  (s.size())
using namespace std;



int designerPdfViewer(vector<int> h, string word) {
    
    h.resize(26);
    for (int i = 0; i < 26; i++)cin >> h[i];
    
    int mx = 0;
    for (int i = 0; i < sz(word); i++)
    {
        mx = max(h[word[i] - 'a'], mx);
    }
    return sz(word) * mx ;

}
