#include <bits/stdc++.h>

using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
    if(points.empty()) return 0;

    sort(points.begin(), points.end(), [](auto& a, auto& b) {
        return a[1] < b[1];
    });

    int result = 1;
    int end = points[0][1];

    for(int i = 1; i < points.size(); ++i) {
        if(points[i][0] > end) {
            result++;
            end = points[i][1];
        }
    }

    return result;
}

int main() {
    vector<vector<int>> points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    int result = findMinArrowShots(points);
    cout << result << endl;
}