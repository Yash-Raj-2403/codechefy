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
        int c = b+1;
        int fin = a/c;
        int ans = a - (fin*b);
        cout <<  ans << endl;
    }
}
