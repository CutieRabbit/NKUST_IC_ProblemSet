#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    vector<int> arr1(6);
    vector<int> arr2(6);
    for(int i = 0; i < 6; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < 6; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < 6; i++){
        cout << (arr1[i]+arr2[i]) % 2 << " ";
    }
    cout << endl;
}
