#include <bits/stdc++.h>
using namespace std;

double floor(int a){
    int b = 1;
    for(int i = 1; i <= b; i++){
        b *= i;
    }
    return b;
}

int main() {
    double x, n;
    cin >> x >> n;
    double ans = 0;
    for(int i = 0; i <= n; i++){
        double a = pow(-1, i);
        double b = floor(2*i+1);
        double c = pow(x, 2*i+1);
        ans += (a*c)/b;
    }
    cout << ans << endl;
}
