#include <iostream>
using namespace std;

int main() {
    string str;
    while(cin >> str) {
        int code[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30,
                      31, 33};
        int a = code[str[0] - 'A'] / 10;
        int b = code[str[0] - 'A'] % 10;
        int sum = a * 1 + b * 9;
        for (int j = 1; j < str.length(); j++) {
            sum += max((8 - j + 1),1) * (str[j] - '0');
        }
        if (!(sum % 10)) {
            cout << "正確!" << endl;
        } else {
            cout << "錯誤!" << endl;
        }
    }
}
