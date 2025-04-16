#include <bits/stdc++.h>

using namespace std;

void reverse(int start, int end, vector<int>& nums){
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k){
    int length = nums.size();
    
    reverse(0, length - 1, nums);
    reverse(0, k - 1, nums);
    reverse(k, length - 1, nums);

}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    return 1;
}