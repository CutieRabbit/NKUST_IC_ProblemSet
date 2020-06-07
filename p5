#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n;
    cin >> n;
    map<double, vector<int>> m;
    for(int i = 0; i < n; i++){
        int x, a, b, c, d;
        cin >> x >> a >> b >> c >> d;
        m[a*0.3+b*0.3+c*0.2+d*0.2].push_back(x);
    }
    vector<int> result;
    for(pair<double, vector<int>> p : m){
        sort(p.second.rbegin(), p.second.rend());
        for(int a : p.second){
            result.push_back(a);
        }
    }
    reverse(result.begin(), result.end());
    for(int i = 0; i < result.size(); i++){
        if(i == result.size() - 1){
            cout << result[i];
        }else{
            cout << result[i] << ">";
        }
    }
    cout << endl;
}
