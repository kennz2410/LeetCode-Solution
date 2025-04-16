#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> mapping(nums.begin(), nums.end());
    int count = 0;

    for (int num : mapping) {  
        if (mapping.find(num - 1) == mapping.end()) {
            int current = num;
            int length = 1;

            while (mapping.find(current + 1) != mapping.end()) {
                current++;
                length++;
            }

            count = max(count, length);
        }
    }

    return count;
}


int main() {
    vector<int> nums ={100,4,200,1,3,2};
    int result = longestConsecutive(nums);
    cout << result << endl;
}