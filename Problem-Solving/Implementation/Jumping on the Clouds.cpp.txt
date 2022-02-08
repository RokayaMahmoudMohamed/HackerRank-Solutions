int jumpingOnClouds(vector<int> c) {
    int n=c.size();
    for (int i = 0; i < n; i++)cin >> c[i];

    int cnt = 0;
    for (int i = 0; i < n;)
    {
         cnt++;
        if (i + 2 < n && c[i + 2] != 1)i += 2;
        else if (i + 1 < n && c[i + 1] != 1)i++;
        else break;
    }

    return cnt-1;
}
