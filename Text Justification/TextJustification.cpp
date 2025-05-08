#include <bits/stdc++.h>

using namespace std;

int count(int start, int end, vector<string>& words) {
    int result = 0;
    for(int i = start; i <= end; i++) {
        result += words[i].length();
    }

    return result;
}

string padLine(string& strs, int target) {
    int n = strs.length();
    for(int i = 0; i < target - n; i++) {
        strs.push_back(' ');
    }

    return strs;
}

int getEnd(int start, vector<string>& words, int target) {
    int end = start + 1;
    int len = words[start].length();
    while(end < words.size() && (len + 1 + words[end].length()) <= target) {
        len +=
    }
}

vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
}

int main() {

}