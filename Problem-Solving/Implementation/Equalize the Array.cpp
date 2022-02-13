int equalizeArray(vector<int> arr) {
    int n=arr.size();

    vector<int>a(109); int mx = 0;
    for (int i = 0; i < n; i++)
    {
        
        a[arr[i]]++;
        mx = max(arr[i], mx);
    }
    sort(a.begin(), a.begin()+mx+1);
    int ans = 0;
    for (int i = 0; i < mx; i++)ans += a[i];

    return ans;
}
