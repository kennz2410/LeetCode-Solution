#include <bits/stdc++.h>

using namespace std;

int candy(vector<int>& ratings) {
    int sum = 0;
    int n = ratings.size();
    vector<int> candies(n, 1);

    for(int i = 1; i < n; i++) {
        if(ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    for(int i = n - 2; i >= 0; i--) {
        if(ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }
    
    for(int candy : candies) {
        sum += candy;
    }

    return sum;
}

int main() {
    vector<int> ratings = {1, 0, 2};
    int result = candy(ratings);
    cout << result;
}
