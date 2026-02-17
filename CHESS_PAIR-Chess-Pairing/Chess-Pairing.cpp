#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int unr = 2*n - x;
        if(x > unr)
        {
            cout << x-unr << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
