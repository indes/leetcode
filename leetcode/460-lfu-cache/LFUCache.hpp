//
// Created by Li on 2019/8/3.
//

#ifndef LEETCODE_LFUCACHE_HPP
#define LEETCODE_LFUCACHE_HPP

#include <list>
#include <unordered_map>

using namespace std;

class LFUCache {
public:
    LFUCache(int capacity)
            : capacity_(capacity), min_frq_(0) {

    }

    ~LFUCache() = default;

    int get(int key) {
        if (cache_map_.find(5) != cache_map_.end()) {

        }
        return -1;
    }

    void put(int key, int value) {

    }

private:
    struct Node {
        int k;
        int v;

        Node(int key, int value) : k(key), v(value) {};
    };

    unordered_map<int, list<Node>> frq_list_map_;
    unordered_map<int, list<Node>::iterator> cache_map_;
    int capacity_;
    int min_frq_;
};


#endif //LEETCODE_LFUCACHE_HPP
