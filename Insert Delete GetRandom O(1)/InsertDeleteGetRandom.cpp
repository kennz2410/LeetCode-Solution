#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
private:
    unordered_set<int> set;
    vector<int> nums;

public:
    RandomizedSet() {
        
    }
        
    bool insert(int val) {
        if(!set.count(val)) {
            set.insert(val);
            nums.push_back(val);
            return true;

        }

        return false;
    }
        
    bool remove(int val) {
        if(set.count(val)) {
            set.erase(val);
            int index = find(nums.begin(), nums.end(), val) - nums.begin();
            nums[index] = nums.back();
            nums.pop_back();
            return true;
        }

        return false;
    }
        
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};