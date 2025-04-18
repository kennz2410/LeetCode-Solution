#include <bits/stdc++.h>

using namespace std;

int hIndex(vector<int>& citations) {
    sort(citations.rbegin(), citations.rend());
    
    for(int i = 0; i < citations.size(); i++) {
        if(citations[i] < i + 1) {
            return i;
        }
    }

    return citations.size();
}

int main() {
    vector<int> citations = {3, 0, 6, 1, 5};
    int result = hIndex(citations);
    cout << result << endl;
}