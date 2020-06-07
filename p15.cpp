#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        str[i] = ((str[i]-'0')+7) % 10 + '0';
    }
    swap(str[0], str[2]);
    swap(str[1], str[3]);
    cout << str << endl;
}
