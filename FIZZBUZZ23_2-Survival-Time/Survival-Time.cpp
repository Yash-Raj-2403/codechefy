#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b>> c;
        int d = b*5;
        int fin = a/d + c;
        cout << fin << endl;
    }
}
