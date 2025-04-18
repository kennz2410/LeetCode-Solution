#include <bits/stdc++.h>

using namespace std;

bool canJump(vector<int>& nums) {
    int length = nums.size();
    int result = 0;
    for(int i = 0; i < length; i++) {
        if(i > result) return false;

        result = max(result, i + nums[i]);
        if(result > nums.size() - 1) {
            return true;
        }
    }

    return true;
}

int main() {
    vector<int> nums = {3,2,1,0,4};
    bool result = canJump(nums);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}