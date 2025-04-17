#include <bits/stdc++.h>

using namespace std;

bool isValid(string s) {
    stack<int> st;

    for(char ch : s) {
        if(ch == '{' || ch == '(' || ch == '[' ){
            st.push(ch);
        } else if(ch == '}' || ch == ')' || ch == ']') {
            if(st.empty() || 
            (ch == '}' && st.top() != '{' ) || 
            (ch == ')' && st.top() != '(' ) || 
            (ch == ']' && st.top() != '[' )) {
                return false;
            } else {
                st.pop();
            }
        }
    }

    return st.empty();
}

int main() {
    string s = "(]";
    bool result = isValid(s);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}