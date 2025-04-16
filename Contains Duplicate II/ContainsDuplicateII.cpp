#include <bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_set<int> mapping;
    for(int i = 0; i < nums.size(); i++) {
        if (!mapping.insert(nums[i]).second) {
            return true; 
        }
        if (i >= k) {
            mapping.erase(nums[i - k]);
        }
    }

    return false;
}

int main() {
    vector<int> nums = {1,2,3,1};
    int k = 3;
    bool result = containsNearbyDuplicate(nums, k);

    if(result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}