#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    if(n == 1 || n == 0) return n;

    int left = 0;
    int right = 0;
    unordered_set<char> mp;
    int result = 0;

    while(right < n) {
        if(mp.find(s[right]) == mp.end()) {
            mp.insert(s[right]);
            result = max(result, right - left + 1);
            right++;
        } else{
            mp.erase(s[left]);
            left++;
        }
    }

    return result;
}

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);
    cout << result << endl;
}