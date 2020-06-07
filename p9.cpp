#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int floor(int a){
    int c = 1;
    for(int i = 1; i <= a; i++){
        c *= i;
    }
    return c;
}

int main() { author_by_CutieRabbit
    int a, b;
    while(cin >> a >> b){
        cout << floor(a)/(floor(b)*floor(a-b)) << endl;
    }
}
