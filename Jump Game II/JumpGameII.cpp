#include <bits/stdc++.h>

using namespace std;

int jump(vector<int>& nums) {
    int count = 0;
    int currEnd = 0;
    int farthest = 0;

    for(int i = 0; i < nums.size() - 1; ++i) {
        farthest = max(farthest, i + nums[i]);

        if(i == currEnd) {
            ++count;
            currEnd = farthest;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};
    int result = jump(nums);
    cout << result << endl; 
}