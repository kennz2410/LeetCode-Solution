#include <bits/stdc++.h>

using namespace std;

int majorityElement(const vector<int>& nums) {
    int candidate = 0, count = 0;
    for (int num : nums) {
        if (count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    int result = majorityElement(nums);
    cout << result;
}