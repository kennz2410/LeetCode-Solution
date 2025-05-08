#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> result;
    int n = intervals.size();
    int i = 0;

    while(i < n && intervals[i][1] < newInterval[0]) {
        result.push_back(intervals[i]);
        i++;
    }

    while(i < n && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(intervals[i][0], newInterval[0]);
        newInterval[1] = max(intervals[i][1], newInterval[1]);
        i++;
    }

    result.push_back(newInterval);

    while(i < n) {
        result.push_back(intervals[i]);
        i++;
    }

    return result;

}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {6, 9}};
    vector<int> newInterval = {2, 5};
    vector<vector<int>> result = insert(intervals, newInterval);

    for (vector<int>& interval: result) 
    cout << interval[0] << " " << interval[1] << endl;
}