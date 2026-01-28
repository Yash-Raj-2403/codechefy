#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(k==0){
            cout<<n*m<<endl;continue;
        }
        
        int small= min(m,n);
        int big = max(m,n);
        
        int first=k/small;
        if(k%small != 0){
            first++;
        }
        
        int second = k/big;
        
        if(k%big != 0){
            second++;
        }
        if(first*small<= second*big){
            cout<<m*n-first*small<<endl;
        }
        else{
            cout<<m*n-second*big<<endl;
        }
    }
    return 0;
}