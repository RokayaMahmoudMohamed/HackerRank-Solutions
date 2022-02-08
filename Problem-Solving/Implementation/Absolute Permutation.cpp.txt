vector<int> absolutePermutation(int n, int k) {
    
        vector<int>a,vis(n+8,0);
       
        if (k!=0&&(n%(2*k))!=0)
        {
            a.push_back(-1);
            return a;
            
        }
         for (int i = 0; i <n; i++)a.push_back(i+1);
        if(k==0)return a;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                swap(a[i], a[i + k]);
                vis[i] = 1;
                vis[i + k] = 1;
            }
        }
        return a;
        
       
}
