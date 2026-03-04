#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int a,b;
    cin >> a >> b;
    if(a==b)
    {
        cout << "Draw" << endl;
    }
    else if(a>b)
    {
        cout << "ALice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
}
