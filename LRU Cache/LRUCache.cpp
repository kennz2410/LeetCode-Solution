#include <bits/stdc++.h>

using namespace std;

class LRUCache {
private:
    int size;
    list<pair<int, int>> cacheList;
    unordered_map<int, list<pair<int, int>>::iterator> cacheMap;

public:
    LRUCache(int capacity) {
        size = capacity;
    }
        
    int get(int key) {
        if(cacheMap.find(key) == cacheMap.end()) return -1;

        auto it = cacheMap[key];
        int value = it->second;

        cacheList.erase(it);
        cacheList.push_front({key, value});
        cacheMap[key] = cacheList.begin();

        return value;
    }
        
    void put(int key, int value) {
        if(cacheMap.find(key) != cacheMap.end()) {
            cacheList.erase(cacheMap[key]);
        }

        cacheList.push_front({key, value});
        cacheMap[key] = cacheList.begin();

        if(cacheMap.size() > size) {
            auto last = cacheList.back();
            cacheMap.erase(last.first);
            cacheList.pop_back();
        }
    }
};

int main() {

}