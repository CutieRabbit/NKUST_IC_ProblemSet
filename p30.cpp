#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> dp(66, vector<int>(66));
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i = 2; i <= 65; i++){
        dp[i][0] = 1;
        for(int j = 1; j <= i-1; j++){
            dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
        }
        dp[i][i] = 1;
    }
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        string str1 = "";
        string str2 = "";
        bool find = false;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == ','){
                find = true;
                continue;
            }
            if(find == false){
                str1 += str[i];
            }else{
                str2 += str[i];
            }
        }
        int a = atoi(str1.c_str());
        int b = atoi(str2.c_str());
        cout << dp[a][b] << endl;
    }
}
