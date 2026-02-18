#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int red = b-c;
        while(a>=b)
        {
            a = a-(red);
        }
        cout << a << endl;
    }
}
