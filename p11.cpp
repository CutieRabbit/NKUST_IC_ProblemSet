#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int T;
    cin >> T;
    while(T--){
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        cout << ceil((c*60+d-(a*60+b))/60.0)*e*f << endl;
    }
}
