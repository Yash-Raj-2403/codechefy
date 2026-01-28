#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int multi = n*x;
        int coun =0;
        while(multi !=0)
        {
            multi=multi/10;
            coun++;
        }
        if(coun ==5)
        cout << "Yes "<< endl;
        else
        cout << "No" << endl;
    }

}
