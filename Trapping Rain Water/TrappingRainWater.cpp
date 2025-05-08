#include <bits/stdc++.h>

using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    int left = 1;
    int right = n - 2; 
    
    int lMax = height[left - 1];
    int rMax = height[right + 1];

    int result = 0;

    while(left <= right) {
        if(lMax < rMax) {
            result += max(0, lMax - height[left]);
            lMax = max(lMax, height[left]);
            left++;
        } else {
            result += max(0, rMax - height[right]);
            rMax = max(rMax, height[right]);
            right--;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {2, 1, 5, 3, 1, 0, 4};
    cout << trap(arr) << endl;
    return 0;
}