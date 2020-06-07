#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int a = 1, b = 1, temp = 0;
    cin >> n;
    for(int i = 2;i <= n; i++){
        temp = a;
        a = b;
        b= a + temp;
    }
    cout << a << endl;
}
