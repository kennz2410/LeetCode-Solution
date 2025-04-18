#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
    int result = 0;
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > prices[i - 1]) {
            result += prices[i] - prices[i - 1];
        }
    }
    return result;
}

int main() {
    vector<int> prices ={2,2,5};
    int result = maxProfit(prices);
    cout << result << endl;
}