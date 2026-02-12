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
        int ter = a/2;
        int maxa = ter*5;
        if(maxa >= b)
        {
            cout << ceil(b/ter)+1 << endl;
        }
        else
        {
            int c = b-maxa;
            cout << ceil(c/a) + 6 << endl;
        }
    }
}
