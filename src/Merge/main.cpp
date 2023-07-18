//
// Created by fierg on 7/18/23.
//
#include "merge.cpp"
#include <string>
#include <iostream>

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int c[] = {10, 12, 14, 16};
    int d[] = {9, 11, 13, 15};
    int e[15];

    merge(std::begin(a), std::end(a), std::begin(b), std::end(b), std::begin(e));
    merge(std::begin(c), std::end(c), std::begin(d), std::end(d), std::begin(e) + 8);

    std::cout << "Merged sequence: ";
    for (const auto& element : e) {
        std::cout << element << " ";
    }
    return 0;
}