#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s) {
    if(s == " ") return true;

    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        while(start < end && !isalnum(s[start])) start++;
        while(start < end && !isalnum(s[end])) end--;

        if(tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }    
    return true;    
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(s);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}