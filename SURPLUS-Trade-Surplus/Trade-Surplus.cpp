#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int ab = a-b;
        int cd = c-d;
        int fin = ab+cd;
        if(fin <0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO " << endl;
        }
    }
}
