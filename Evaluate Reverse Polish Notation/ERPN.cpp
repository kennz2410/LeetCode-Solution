#include <bits/stdc++.h>

using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for(string token : tokens) {
        if(token == "+" || token == "-" || token == "*" || token == "/" ) {
            int nums1 = st.top();
            st.pop();
            int nums2 = st.top();
            st.pop();
            int result = 0;

            if(token == "+") {
                result = nums2 + nums1;
            } else if(token == "-") {
                result = nums2 - nums1;

            } else if(token == "*") {
                result = nums2 * nums1;
            } else {
                result = nums2 / nums1;
            }

            st.push(result);
        } else {
            int nums = stoi(token);
            st.push(nums);
        }
    }
    return st.top();
}

int main() {
    vector<string> tokens ={"2","1","+","3","*"};
    int result = evalRPN(tokens);
    cout << result << endl;
}