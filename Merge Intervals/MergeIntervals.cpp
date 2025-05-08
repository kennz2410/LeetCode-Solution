#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    vector<vector<int>> result;
    sort(intervals.begin(), intervals.end());
    result.push_back(intervals[0]);

    for(int i = 1; i < n; i++) {
        vector<int>& last = result.back();
        vector<int>& curr = intervals[i];

        if(curr[0] <= last[1]) {
            last[1] = max(last[1], curr[1]);
        } else {
            result.push_back(curr);
        }
    }        

    return result;
}

int main() {
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = merge(nums);

    for (vector<int>& interval: result) 
    cout << interval[0] << " " << interval[1] << endl;

    return 0;
}