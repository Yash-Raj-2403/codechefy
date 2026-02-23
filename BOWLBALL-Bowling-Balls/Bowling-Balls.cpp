#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= x && a[i] <= y) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    // your code goes here
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
}