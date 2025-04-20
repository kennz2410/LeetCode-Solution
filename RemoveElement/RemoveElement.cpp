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

int main() {
    int n, val;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> val;

    int newSize = removeElement(nums, val);

    cout << newSize << endl;
    for(int i = 0; i < newSize; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}