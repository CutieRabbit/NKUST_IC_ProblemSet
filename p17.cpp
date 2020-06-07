#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        if(i % 7 == 2 && i % 9 == 2 && i % 3 == 2){
            cout << i << endl;
        }
    }
}
