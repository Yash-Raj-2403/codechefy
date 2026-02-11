        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int penal = a[0]-b[0];
        for(int i=0;i<n;i++)
        {
            int c = a[i] - b[i];
            if(penal > c)
            {
                penal = c;
            }
        }
        int sum =0;
        for(int i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
        cout << sum - penal << endl;
    }
}
