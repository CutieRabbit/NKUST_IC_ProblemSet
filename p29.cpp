#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n;
    cin >> n;
    vector<pair<int,string>> vec(n);
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        int sum = 0;
        for(int j = 0; j < str.length(); j++){
            sum += str[j]-'0';
        }
        vec[i].first = sum;
        vec[i].second = str;
    }
    sort(vec.begin(), vec.end());
    for(pair<int,string> p : vec){
        cout << p.second << " ";
    }
    cout << endl;
}
