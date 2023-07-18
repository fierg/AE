//
// Created by fierg on 7/18/23.
//

#include <string>
#include <vector>
#include "dictionary.h"

    dictionary::dictionary() {} // Default constructor
    dictionary::~dictionary() {}

    void dictionary::insert(int value, const std::string& key) {
        dict[key] = value;
    }

    int dictionary::lookup(const std::string& key) {
        if (dict.count(key) > 0) {
            return dict[key];
        }
        return -1; // Return a default value if key is not found
    }

    bool dictionary::defined(const std::string& key) {
        return dict.count(key) > 0;
    }

    void dictionary::remove(const std::string& key) {
        dict.erase(key);
    }

    std::string* dictionary::getKeyArray() {
        std::string* keys = new std::string[dict.size()];
        int index = 0;
        for (const auto& pair : dict) {
            keys[index++] = pair.first;
        }
        return keys;
    }

    int dictionary::size() {
        return dict.size();
    }