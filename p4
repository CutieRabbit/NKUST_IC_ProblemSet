#include<bits/stdc++.h>
#define author_by_CutieRabbit ios::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() { author_by_CutieRabbit
    int n;
    while(cin >> n){
        double ans1 = 0;
        double ans2 = 0;
        if(n <= 120){
            ans1 += n*2.1;
            ans2 += n*2.1;
        }else if(n > 120 && n <= 330){
            ans1 += 120*2.1 + (n-120)*3.02;
            ans2 += 120*2.1 + (n-120)*2.68;
        }else if(n > 330 && n <= 500){
            ans1 += 120*2.1 + 210*3.02 + (n-330)*4.39;
            ans2 += 120*2.1 + 210*2.68 + (n-330)*3.61;
        }else if(n > 500 && n <= 700){
            ans1 += 120*2.1 + 210*3.02 + 170*4.39 + (n-500)*4.97;
            ans2 += 120*2.1 + 210*2.68 + 170*3.61 + (n-500)*4.01;
        }else{
            ans1 += 120*2.1 + 210*3.02 + 170*4.39 + 200*4.91 + (n-700)*5.63;
            ans2 += 120*2.1 + 210*2.68 + 170*3.61 + 200*4.01 + (n-700)*4.50;
        }
        printf("Summer months:%.2f\n", ans1);
        printf("Non-Summer months:%.2f\n", ans2);
    }
}
