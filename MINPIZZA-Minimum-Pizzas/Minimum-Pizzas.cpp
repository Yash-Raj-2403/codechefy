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
        float c = a*b;
        cout << ceil(c/4) << endl;
    }
}
