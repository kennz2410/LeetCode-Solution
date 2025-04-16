#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int length = nums.size();
    vector<int> result;
    unordered_map<int, int> mapping;

    for(int i = 0; i < length; i++){
        int wanted_value = target - nums[i];

        if(mapping.count(wanted_value)) {
            result.push_back(mapping[wanted_value]);
            result.push_back(i);
        }   

        mapping[nums[i]] = i;
    }

    return result;
}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}