#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        float b= 0.20*a;
        cout << ceil(100/b) << endl;
    }
}
