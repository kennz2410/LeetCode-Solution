#include <bits/stdc++.h>

using namespace std;

bool Sub_isHappy(int n, unordered_set<int>& visited) {
    if(n == 1) return true;
    if(visited.count(n)) return false;

    visited.insert(n);

    int result = 0;
    while(n > 0){
        int digit = n % 10;
        n /= 10;
        result += pow(digit, 2);
    }

    return Sub_isHappy(result, visited);
}

bool isHappy(int n){
    unordered_set<int> visited;
    return Sub_isHappy(n, visited);
}

int main() {
    int n = 19;
    bool result = isHappy(n);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}