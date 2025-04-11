#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int pivot = nums.size();
    int count = 0;
    while(count < pivot){
        if(nums[count] == val){
            nums[count] = nums[pivot - 1];
            pivot--;
        } else {
            count++;
        }
    }

    return pivot;
}

int main(){

}