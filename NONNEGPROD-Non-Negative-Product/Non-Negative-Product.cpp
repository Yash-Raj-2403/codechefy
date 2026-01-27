#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, count = 0, flag = 0;
        cin >> n;

        for (int i = 0; i < n; ++i){
            int temp;
            cin >> temp;

            if(temp < 0)
                count++;

            if(temp == 0)
                flag = 1;
        }

        if(count % 2 == 0 || flag == 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}