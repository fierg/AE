//
// Created by fierg on 7/18/23.
//
#include <string>
#include <iostream>

template <typename Iterator>
bool palindrom(Iterator a, Iterator b) {
    --b; // b ist ein Element hinter dem letzten
    while(a < b && *a == *b){
        ++a;
        --b;
    }
    return a >=b;
}

int main() {
    std::string str1 = "level";
    std::string str2 = "hello";

    if (palindrom(str1.begin(), str1.end())) {
        std::cout << str1 << " is a palindrome." << std::endl;
    } else {
        std::cout << str1 << " is not a palindrome." << std::endl;
    }

    if (palindrom(str2.begin(), str2.end())) {
        std::cout << str2 << " is a palindrome." << std::endl;
    } else {
        std::cout << str2 << " is not a palindrome." << std::endl;
    }

    return 0;
}