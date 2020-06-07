#include<bits/stdc++.h>
#define int long long
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() { author_by_CutieRabbit
    int n;
    while(cin >> n) {
        bool find = true;
        for (int i = 2; i < n; i++) {
            find &= (n % i) != 0;
        }
        if (find) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
