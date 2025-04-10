#include <bits/stdc++.h>

using namespace std;

bool isValid(vector<int> nums){
    int length = nums.size();
    for(int i = 1; i < length; i++){
        if(nums[i] < nums[i - 1]){
            return false;
        }
    }
    return true;
}

int minimumPairRemoval(vector<int>& nums) {
    int ops = 0;

    while(!isValid(nums)){
        int minidx = 0;
        int minVal = nums[0] + nums[1];

        int length = nums.size();

        for(int i = 1; i < length - 1; i++){
            int sum = nums[i] + nums[i + 1];
            if(minVal > sum){
                minVal = sum;
                minidx = i;
            }
        }

        nums[minidx] = nums[minidx] + nums[minidx + 1];
        nums.erase(nums.begin() + minidx + 1);
        ops++;
    }

    return ops;
}

int main(){
    vector<int> nums = {5, 2, 3, 1};
    int result = minimumPairRemoval(nums);
    cout << result << endl;
}