#include <bits/stdc++.h>

using namespace std;

vector<string> splitString(string s){
    istringstream iss(s);
    string word;
    vector<string> result;

    while(iss >> word) {
        result.push_back(word);
    }

    return result;
}

bool wordPattern(string pattern, string s) {
    vector<string> str = splitString(s);
    int length = str.size();

    if(pattern.length() != str.size()) return false;

    unordered_map<char, string> PTW;
    unordered_map<string, char> WTP;

    for(int i = 0; i < length; i++) {
        char ch = pattern[i];
        string str1 = str[i];

        if(PTW.count(ch)) {
            if(PTW[ch] != str1) return false;
        } else {
            PTW[ch] = str1;
        }

        if(WTP.count(str1)) {
            if(WTP[str1] != ch) return false; 
        } else {
            WTP[str1] = ch;
        }

    }

    return true;
}

int main() {
    string pattern = "jquery";
    string s = "jquery";
    bool result = wordPattern(pattern, s);
    
    if(result){
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}