        {
            if(s[i] == '0')
            {
                zero++;
                b.push_back(a[i]);
            }
            else
            {
                one++;
            }
        }
        sort(b.begin(),b.end());
        if(zero < tot)
        {
            cout << -1 << endl;
        }
        else
        {
            int sum=0;
            for(int i=0;i<tot;i++)
            {
                sum = sum + b[i];
            }
            cout << sum << endl;
        }
    }
}
