#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> result(nums.size());


    int prefix = 1;
    for(int i = 0; i < nums.size(); i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for(int i = nums.size() - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= nums[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}