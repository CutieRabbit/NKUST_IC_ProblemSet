#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    string temp;
    while(cin >> temp){
        for(int i = 0; i <= 9999; i++){
            string str = to_string(i);
            if(str.length() == 1){
                str = "000" + str;
            }
            if(str.length() == 2){
                str = "00" + str;
            }
            if(str.length() == 3){
                str = "0" + str;
            }
            string save = str;
            str[0] = ((str[0]-'0')*3)%10+'0';
            str[1] = ((str[1]-'0')*3)%10+'0';
            str[2] = ((str[2]-'0')*3)%10+'0';
            str[3] = ((str[3]-'0')*3)%10+'0';
            if(str == temp){
                cout << save << endl;
                break;
            }
        }
    }
}
