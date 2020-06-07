#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int a, b, c;
    while(cin >> a >> b >> c){
        vector<int> vec = {a, b, c};
        sort(vec.begin(), vec.end());
        if((vec[0] + vec[1] > vec[2]) && (vec[1]-vec[0]) < vec[2]){
            cout << "fit" << endl;
        }else{
            cout << "unfit" << endl;
        }
    }
}
