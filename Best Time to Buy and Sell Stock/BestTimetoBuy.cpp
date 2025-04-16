#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;

    for(int price : prices){
        if(price < minPrice){
            minPrice = price;
        } else {
            maxProfit = max(maxProfit, price - minPrice);
        }
    }

    return maxProfit;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};
    int result = maxProfit(nums);
    cout << result;
}