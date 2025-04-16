#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n <= 2) return n;

    int index = 2; 
    for (int i = 2; i < n; i++) {
        if (nums[i] != nums[index - 2]) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3}; // test case
    int newLength = removeDuplicates(nums);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
