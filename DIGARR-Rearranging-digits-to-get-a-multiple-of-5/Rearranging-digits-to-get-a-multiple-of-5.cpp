#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n,num;
        cin >> n >> num;
        bool found = false;
        while(num!=0)
        {
            int re = num%10;
            if(re ==5 || re == 0)
            {
                found = true;
                break;
            }
            num = num/10;
        }
        if(found)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
