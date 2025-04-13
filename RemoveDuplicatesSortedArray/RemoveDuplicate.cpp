#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int index = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != nums[index]){
            index++;
            nums[index] = nums[i];
        }
    }      
    return index + 1;
}

int main(){
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int result = removeDuplicates(nums);
    cout << result;
}