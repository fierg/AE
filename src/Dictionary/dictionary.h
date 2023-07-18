//
// Created by fierg on 7/18/23.
//

#ifndef AE_DICTIONARY_H
#define AE_DICTIONARY_H

#endif //AE_DICTIONARY_H

#include <unordered_map>

class dictionary{
public:
    dictionary(); // Konstruktor
    ~dictionary(); //Destruktor
    void insert(int wert, const std::string& key);
    int lookup(const std::string& key);
    bool defined(const std::string& key);
    void remove(const std::string& key);
    std::string* getKeyArray(); //liefert Array auf alle Keys
    int size();
private:
    std::unordered_map<std::string, int> dict;
};