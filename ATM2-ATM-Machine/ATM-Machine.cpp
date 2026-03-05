    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n,to;
        cin >> n >> to;
        vector<int> a(n);
        string s ="";
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i] <= to)
            {
                to = to - a[i];
                s += '1';
            }
            else
            {
                s +='0';
            }
        }
        cout << s << endl;
    }
}
