//
// Created by fierg on 7/18/23.
//
#include "merge.cpp"
#include <string>
#include <iostream>

int main() {
    std::string str1 = "level";
    std::string str2 = "hello";
    std::string out = "";

    merge(str1.begin(),str1.end(),str2.begin(),str2.end(),out.begin());
    std::cout << "merged String: " << out << std::endl;

    return 0;
}