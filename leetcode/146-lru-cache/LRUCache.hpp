//
// Created by Li on 2019/8/3.
//

#ifndef LEETCODE_LRUCACHE_HPP
#define LEETCODE_LRUCACHE_HPP

#include <list>
#include <unordered_map>

using namespace std;

class LRUCache {
public:
    explicit LRUCache(int capacity)
            : capacity_(capacity), cache_list_(), cache_map_() {
    }

    virtual ~LRUCache() = default;

    int get(int key) {
        if (cache_map_.find(key) != cache_map_.end()) {

            cache_list_.splice(cache_list_.begin(), cache_list_, cache_map_[key]);
            cache_map_[key] = cache_list_.begin();
            return cache_list_.begin()->value;
        } else {
            return -1;
        }
    }

    void put(int key, int value) {
        if (cache_map_.find(key) == cache_map_.end()) {
            if (cache_list_.size() == capacity_) {
                cache_map_.erase(cache_list_.back().key);
                cache_list_.pop_back();
            }
            cache_list_.push_front({key, value});
            cache_map_[key] = cache_list_.begin();

        } else {
            cache_list_.splice(cache_list_.begin(), cache_list_, cache_map_[key]);
            cache_list_.begin()->value = value;
            cache_map_[key] = cache_list_.begin();
        }
    }

private:
    struct CacheNode {
        int key;
        int value;

        CacheNode(int k, int v) : key(k), value(v) {}
    };

    list<CacheNode> cache_list_;
    unordered_map<int, list<CacheNode>::iterator> cache_map_;
    int capacity_;
};

#endif //LEETCODE_LRUCACHE_HPP
