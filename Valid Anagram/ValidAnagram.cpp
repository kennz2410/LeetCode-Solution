#include <bits/stdc++.h>

using namespace std;


//Faster Version
// bool isAnagram(string s, string t) {
//     if (s.length() != t.length()) return false;

//     int count[26] = {0};

//     for (int i = 0; i < s.length(); ++i) {
//         count[s[i] - 'a']++;
//         count[t[i] - 'a']--;
//     }

//     for (int i = 0; i < 26; ++i) {
//         if (count[i] != 0) return false;
//     }

//     return true;
// }

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, int> freq;

    for (char c : s) freq[c]++;
    for (char c : t) {
        if (--freq[c] < 0) return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";
    bool result = isAnagram(s, t);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 1;
}