#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n;
    while(cin >> n){
        vector<pair<int,int>> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i].first >> vec[i].second;
        }
        double ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                double t = (vec[i].first-vec[j].first)*(vec[i].first-vec[j].first)+(vec[i].second-vec[j].second)*(vec[i].second-vec[j].second);
                ans = max(t, ans);
            }
        }
        cout << ans << endl;
    }
}
