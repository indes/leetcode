//
// Created by Li on 2019/4/9.
//

#ifndef LEETCODE_TRIE_H
#define LEETCODE_TRIE_H

#include <vector>
#include <string>
#include <memory>

using std::vector;
using std::string;

class Trie {
public:
    /** Initialize your data structure here. */
    Trie(): root(new TrieNode()) {}

    /** Inserts a word into the trie. */
    void insert(const string& word) {
        TrieNode* p = root.get();
        for (const char c : word) {
            if (!p->children[c - 'a'])
                p->children[c - 'a'] = new TrieNode();
            p = p->children[c - 'a'];
        }
        p->is_word = true;
    }

    /** Returns if the word is in the trie. */
    bool search(const string& word) const {
        const TrieNode* p = find(word);
        return p && p->is_word;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(const string& prefix) const {
        return find(prefix) != nullptr;
    }

private:
    struct TrieNode {
        TrieNode() : is_word(false), children(26, nullptr) {}

        ~TrieNode() {
            for (TrieNode *child : children)
                delete child;
        }

        bool is_word;
        vector<TrieNode *> children;
    };
    const TrieNode* find(const string& prefix) const {
        const TrieNode* p = root.get();
        for (const char c : prefix) {
            p = p->children[c - 'a'];
            if (p == nullptr) break;
        }
        return p;
    }
    std::unique_ptr<TrieNode> root;

};

#endif //LEETCODE_TRIE_H
