#include <bits/stdc++.h>

using namespace std;

bool isIsomorphic(string s, string t) {
    int mapS[256] = {0};
    int mapT[256] = {0};

    for(int i = 0; i < s.length(); i++){
        char s1 = s[i];
        char s2 = t[i];

        if(mapS[s1] == 0 && mapT[s2] == 0) {
            mapS[s1] = s2;
            mapT[s2] = s1;
        } else {
            if(mapS[s1] != s2 || mapT[s2] != s1) {
                return false;
            }
        }
    }

    return true;
}

int main(){
    string s = "foo";
    string t = "bar";
    bool result = isIsomorphic(s, t);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}