#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    string str;
    cin >> str;
    int ans = 0;
    for(int i = 0; i < str.length(); i++){
        if(i % 2 == 0) ans += str[i]-'0';
        else ans -= str[i]-'0';
    }
    if(ans % 11 == 0){
        printf("%s 之奇偶數差為 11 的倍數", str.c_str());
    }else{
        printf("%s 之奇偶數差不是 11 的倍數", str.c_str());
    }
}
