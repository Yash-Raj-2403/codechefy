#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >>c;
        int fin = b*c;
        int ans = a-fin;
        if(ans<=0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}
