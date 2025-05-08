#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) {
    if(t.length() < s.length()) return false;

    int index1 = 0;        
    int index2 = 0;
    while(index1 < s.length() && index2 < t.length()) {
        if(s[index1] == t[index2]) {
            index1++;
        }
        index2++;
    }        
    return index1 == s.length();
}

int main() {
    string s = "axc";
    string t = "ahbgdc";
    bool result = isSubsequence(s, t);
    
    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}