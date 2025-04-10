#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[high];

    int i = low - 1;

    for(int j = low; j <= high - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high){
    if(low < high){

        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int threeSumClosest(vector<int>& nums, int target) {
    int length = nums.size();
    int closetSum = nums[0] + nums[1] + nums[2];

    quickSort(nums, 0, length - 1);

    for(int i = 0; i < length - 2; i++){
        int left = i + 1; 
        int right = length - 1; 
        while (left < right) {
            int current_sum = nums[i] + nums[left] + nums[right];
            if (abs(current_sum - target) < abs(closetSum - target)) {
                closetSum = current_sum;
            }
            if (current_sum < target) {
                ++left;
            } else if (current_sum > target) {
                --right;
            } else {
                return current_sum;
            }
        }
    }
    
    return closetSum;
}

int main(){
    vector<int> nums ={-1, 2, 1, -4};
    int target = 1;
    int result = threeSumClosest(nums, target);
    cout << result << endl;
}