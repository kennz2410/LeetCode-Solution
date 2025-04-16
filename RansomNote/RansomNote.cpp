#include <bits/stdc++.h>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    for(int j = 0; j < ransomNote.length(); j++){
        char ch = ransomNote[j];
        bool status = false;

        for(int i = 0; i < magazine.length(); i++) {
            if(ch == magazine[i]){
                status = true;
                magazine[i] = ' ';
                break;
            }
        }

        if(!status) return false;
    }
    return true;
}

int main(){
    string ransomNote = "aa";
    string magazine = "aab";

    bool result = canConstruct(ransomNote, magazine);
    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}