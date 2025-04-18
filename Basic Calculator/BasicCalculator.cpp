#include <bits/stdc++.h>

using namespace std;

int calculate(string s) {
    stack<int> st;

    int result = 0, sign = 1, num = 0;

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(isdigit(ch)) {
            num = num * 10  + (ch - '0');
        } else if(ch == '+' || ch == '-') {
            result += sign * num;
            num = 0;
            sign = (ch == '+') ? 1 : -1;
        } else if(ch == '(') {
            st.push(result);
            st.push(sign);
            result = 0;
            sign = 1;
        } else if(ch == ')') {
            result += sign * num;
            num = 0;
            result *= st.top(); st.pop();
            result += st.top(); st.pop();
        }

    }

    result += sign * num;
    return result;
} 

int main() {
    string s = "1 + 1";
    int result = calculate(s);
    cout << result << endl;
}