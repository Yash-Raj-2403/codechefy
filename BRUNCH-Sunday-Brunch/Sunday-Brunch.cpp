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
        if((a/b) > 20)
        {
            cout << 20 << endl;
        }
        else
        {
            cout << a/b << endl;
        }
    }
}
