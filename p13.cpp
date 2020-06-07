#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }else if(str[i] >= '0' && str[i] <= '9'){
            str[i] = '0';
        }
    }
    cout << str << endl;
}
