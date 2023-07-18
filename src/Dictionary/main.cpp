//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "dictionary.h"
#include <string>
#include <vector>

int main() {
    dictionary D;
    std::string s;
    std::cout << "Enter a couple words, seperated by space (exit with [STRG] + D) " << std::endl;
    while (std::cin >> s) {
        if (D.defined(s)) {
            int v = D.lookup(s);
            D.insert(++v, s);
        } else {
            D.insert(1, s);
        }
    }
    std::string* keys = D.getKeyArray();
    std::cout << "\n" << std::endl;
    for (int i = 0; i < D.size(); i++) {
        std::cout << "Word: " << keys[i] << " Occurrence: " << D.lookup(keys[i]) << std::endl;
    }

    return 0;
}