#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string s , su;
        cin >> s >> su;
        vector<bool> used(26);
        for(int i=0;i<n;i++)
        {
            used[s[i]-'a'] = true;
        }
        for(int i=0;i<m;i++)
        {
            used[su[i]-'a'] = true;
        }
        bool found = false;
        for(int i=0;i<26;i++)
        {
            if(!used[i])
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
