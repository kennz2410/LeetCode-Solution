#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s) {
    int n = s.size();
    int i = 0, j = 0;
    
    while (i < n && s[i] == ' ') i++;

    while(i < n) {
        if(s[i] != ' ') {
            s[j++] = s[i++];
        } else {
            s[j++] = ' ';
            while(i < n && s[i] == ' ') i++;
        }
    }    

    if(j > 0 && s[j - 1] == ' ') j--;
    s.resize(j);
    n = s.size();


    reverse(s.begin(), s.end());

    int l = 0;
    for(int r = 0; r <= s.size(); r++) {
        if(r == s.size() || s[r] == ' ' ) {
            reverse(s.begin() + l, s.begin() + r);
            l = r + 1;
        }
    }

    return s;

}

int main() {
    string s = "  hello world  ";
    s = reverseWords(s);
    cout << s;
}