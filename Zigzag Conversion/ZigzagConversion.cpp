#include <bits/stdc++.h>

using namespace std;

string convert(string s, int numRows) {
    if(numRows == 1) {
        return s;
    }

    int row = 0;
    bool down;
    vector<string> arr(numRows);

    for(int i = 0; i < s.length(); i++) {
        arr[row].push_back(s[i]);

        if(row == numRows - 1) {
            down = false;
        } else if (row == 0) {
            down = true;
        }

        (down) ? row++ : row--;
    }
    
    string result;
    for(int i = 0; i < numRows; i++) {
        result += arr[i];
    }

    return result;
}

int main() {
    string s = "PAYPALISHIRING";
    int nums = 3;
    cout << convert(s, nums);
}