#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    unordered_map<string, vector<string>> anagramMap;

    for(string str : strs){
        string key = str;
        sort(key.begin(), key.end());
        anagramMap[key].push_back(str);
    }

    for(auto& it : anagramMap){
        result.push_back(it.second);
    }

    return result;
}

int main(){
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    for(int i = 0; i < result.size(); i++){
        for(string str : result[i]){
            cout << str << " ";
        }

        cout << endl;
    }
}