#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n;
    while(cin >> n){
        if(n <= 180){
            cout << n*0.16 << endl;
        }else if(n > 180 && n <= 300){
            cout << n*0.16*0.9 << endl;
        }else if(n > 300 && n <= 600){
            cout << n*0.16*0.8 << endl;
        }else if(n > 600){
            cout << n*0.16*0.7 << endl;
        }
    }
}
