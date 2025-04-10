#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

    int length = nums.size();

    for(int i = 0; i < length - 2; i++){
        if(i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1, right = length - 1;

        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0){
                result.push_back({nums[i], nums[left], nums[right]});
                while(left < right && nums[left] == nums[left + 1]){
                    left++;
                }
                while(left < right && nums[right] == nums[right - 1]){
                    right--;
                }
                left++;
                right--;
            } else if(sum < 0){
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> result = threeSum(nums);

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < 3; j++){
            cout << result[i][j] << " ";
        }

        cout << endl;
    }    
}