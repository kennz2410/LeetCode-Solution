#include <bits/stdc++.h>

using namespace std;

int lengthOfLastWord(string s) {

    int length = s.length() - 1;
    int count = 0;

    while(length >= 0 && s[length] == ' ') length--;

    while(length >= 0 && s[length] != ' '){
        count++;
        length--;

    }

    return count;
}

int main(){
    string s = " a";
    int result = lengthOfLastWord(s);
    cout << result << endl;
    // cout << s.length() << endl;
}