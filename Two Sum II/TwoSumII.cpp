#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();
    int left = 0;
    int right = n - 1;
    while(left < right) {
        if(numbers[left] + numbers[right] > target) {
            right--;
        } else if(numbers[left] + numbers[right] < target) {
            left++;
        } else if(numbers[left] + numbers[right] == target) {
            return {left + 1, right + 1};
        }
    }
    return {};
}

int main() {
    vector<int> nums = {3,24,50,79,88,150,345};
    int target = 200;
    vector<int> result = twoSum(nums, target);
    for(int num : result) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}