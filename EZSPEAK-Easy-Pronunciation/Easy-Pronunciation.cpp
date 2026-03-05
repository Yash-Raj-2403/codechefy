        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] 
                == 'u')
            {
                v++;
                con=0;
            }
            else
            {
                con++;
                if(con >=4)
                {
                    found = true;
                }
            }
        }
        if(found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    
}
