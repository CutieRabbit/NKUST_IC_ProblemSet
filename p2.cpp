#include<bits/stdc++.h>
#define int long long
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int32_t main() { author_by_CutieRabbit
    double a, b;
    while(cin >> a >> b){
        if(b == 1){
            printf("%.1f", (a-80)*0.7);
        }else{
            printf("%.1f", (a-70)*0.6);
        }
    }
}
