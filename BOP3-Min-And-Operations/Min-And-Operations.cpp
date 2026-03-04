#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        long long a;
        cin >> a;
        long long ans =0;
        for(long long i=2;i<=a;i=i+2)
        {
            ans = ans + i;
        }
        cout << ans << endl;
    }
}
