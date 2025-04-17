#include <bits/stdc++.h>

using namespace std;

string simplifyPath(string path) {
    stack<string> st;
    stringstream ss(path);
    string part;

    while(getline(ss, part, '/')){
        if(part == "" || part == ".") {
            continue;
        } else if (part == "..") {
            if(!st.empty()) {
                st.pop();
            }
        } else {
            st.push(part);
        }
    }

    vector<string> partResult;
    while(!st.empty()) {
        partResult.push_back(st.top());
        st.pop();
    }

    reverse(partResult.begin(), partResult.end());

    string result = "/";

    for(int i = 0; i < partResult.size(); i++) {
        result += partResult[i];
        if(i != partResult.size() - 1){
            result += "/";
        }
    }

    return result;

}

int main() {
    string path = "/home/user/Documents/../Pictures";
    string output = simplifyPath(path);

    cout << output <<  endl;
}