#include <bits/stdc++.h>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int result = INT_MAX;
    int n = nums.size();
    int i = 0, j = 0;
    int sum = 0;
    while(j < n) {
        sum += nums[j++];

        while(sum >= target) {
            result = min(result, j - i);
            sum -= nums[i++];
        }
    }

    if(result == INT_MAX) return 0;

    return result;
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    int target = 11;
    int result = minSubArrayLen(target, nums);
    cout << result;
}