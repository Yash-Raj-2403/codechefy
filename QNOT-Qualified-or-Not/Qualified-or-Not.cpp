#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    
    int n,x,y;
    cin>> n >> x >> y;
    
    if(n>=2*x && n>=2*y){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    return 0;
}