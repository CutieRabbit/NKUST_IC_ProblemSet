#include<bits/stdc++.h>
using namespace std;

int main(){
    string ans;
    cin >> ans;
    string str;
    while(cin >> str){
        if(str == "0000") break;
        int a = 0, b = 0;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == ans[i]) a++;
        }
        for(int i = 0; i < str.length(); i++){
            for(int j = 0; j < str.length(); j++){
                if(i == j) continue;
                if(ans[i] == str[j]){
                    b++;
                }
            }
        }
        printf("%dA%dB\n",a,b);
    }
}
