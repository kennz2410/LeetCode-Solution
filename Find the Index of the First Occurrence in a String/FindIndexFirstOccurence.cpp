#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size(), m = needle.size();
    if (m == 0) return 0;


    vector<int> lps(m, 0);
    int len = 0;
    for (int i = 1; i < m; ) {
        if (needle[i] == needle[len]) {
            lps[i++] = ++len;
        } else if (len > 0) {
            len = lps[len - 1];
        } else {
            lps[i++] = 0;
        }
    }

    int i = 0, j = 0; 
    while (i < n) {
        if (haystack[i] == needle[j]) {
            i++; j++;
            if (j == m) return i - j; 
        } else if (j > 0) {
            j = lps[j - 1]; 
        } else {
            i++;
        }
    }

    return -1;
}

int main() {
    string haystack = "sadbutsad";
    string needle = "sad";
    int result = strStr(haystack, needle);

    cout << result;
}