#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n, m;
    while(cin >> n >> m){
        cout << (sqrt(n*n+m*m) >= 100 ? "Outside" : "Inside") << endl;
    }
}
