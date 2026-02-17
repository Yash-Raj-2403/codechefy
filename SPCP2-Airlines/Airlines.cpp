#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        double an = (b/100.0)-a;
        int d = ceil(an);
        if(an<0)
        {
            cout << 0 << endl;
         }
        else
        cout << d << endl;
    }
}
