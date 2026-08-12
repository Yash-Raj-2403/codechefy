    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a%3==0)
        {
            cout << 0 << endl;
        }
        else if(a%3==2)
        {
            cout << 1 << endl;
        }
        else
        {
            int fin = a/5;
            int ans = (fin+1)*5;
            if(ans %3==0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}