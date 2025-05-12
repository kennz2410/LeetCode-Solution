#include <bits/stdc++.h>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int left = 0;
    int right = m*n - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        int midVal = matrix[mid / n][mid % n];

        if(midVal < target) {
            left = mid + 1;
        } else if(midVal > target) {
            right = mid - 1;
        } else {
            return true;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> nums = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    bool result = searchMatrix(nums, target);
    
    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}