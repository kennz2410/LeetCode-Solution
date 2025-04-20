#include <bits/stdc++.h>

using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int currGas = 0;
    int index = 0;
    int totalTank = 0;
    for(int i = 0; i < gas.size(); i++) {
        currGas += gas[i] - cost[i];
        totalTank += gas[i] - cost[i];
        if(currGas < 0)  {
            index = i + 1;
            currGas = 0;
        };
    }

    return (totalTank >= 0) ? index : -1;
}

int main() {
    vector<int> gas = {2, 3, 4};
    vector<int> cost = {3, 4, 3};
    int result = canCompleteCircuit(gas, cost);

    cout << result << endl;

    return 0;
}