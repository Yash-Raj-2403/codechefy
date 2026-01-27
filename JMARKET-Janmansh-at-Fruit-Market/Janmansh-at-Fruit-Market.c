#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        int n[3];
        for(int i=0;i<3;i++)
        {
            cin >> n[i];
        }
        sort(n,n+3);
        int mina = n[0];
        int mint = n[1];
        cout << mint + mina*(a-1) << endl;
    }
}
