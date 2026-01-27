#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a[4];
        int c=0;
        for(int i=0;i<4;i++)
        {
            cin >> a[i];
            if(a[i]==0)
            {
                c++;
            }
        }
        if(c==4)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
}
