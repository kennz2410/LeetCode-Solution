#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }     
    int iniNum = x;   
    long long newNum = 0;
    while(x != 0) {
        int lastDigit = x % 10;

        if (newNum > (LLONG_MAX / 10) || (newNum == LLONG_MAX / 10 && lastDigit > 7)) {
            return false; 
        }
        newNum = newNum * 10 + lastDigit;
        x /= 10;
    }
    return newNum == iniNum;
}

int main() {
    int num = 121;
    bool result = isPalindrome(num);
    if(result) {
        cout << "true";
    }else {
        cout << "false";
    }
}