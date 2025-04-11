#include <bits/stdc++.h>

using namespace std;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<vector<pair<int, int>>> adjs(n + 1);

    for (auto& time : times) {
        int u = time[0], v = time[1], w = time[2];
        adjs[u].emplace_back(v, w);
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    vector<int> dist(n + 1, INT_MAX);

    dist[k] = 0;
    pq.emplace(0, k);

    while(!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();


        if (d > dist[u]) continue;
        
        for (auto& [v, weight] : adjs[u]) {
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.emplace(dist[v], v);
            }
        }
    }

    int result = *max_element(dist.begin() + 1, dist.end());
    return (result == INT_MAX) ? -1 : result;
}

int main(){
    vector<vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int n = 4;
    int k = 2;
    int result = networkDelayTime(times, n, k);
    cout << result;
}