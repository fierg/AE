//
// Created by fierg on 7/18/23.
//
#include "ListElement.cpp"

template<typename T>
class List {
public:
    List() : head(nullptr) {}

    virtual ~List() {
        while (head != nullptr) {
            ListElement<T>* nextElement = head->getNext();
            delete head;
            head = nextElement;
        }
    }

    void insert(const T& value) {
        ListElement<T>* newElement = new ListElement<T>(value);
        if (head == nullptr) {
            head = newElement;
        } else {
            ListElement<T>* current = head;
            while (current->getNext() != nullptr) {
                current = current->getNext();
            }
            current->setNext(newElement);
        }
    }

    ListElement<T>* getHead() {
        return head;
    }

protected:
    ListElement<T>* head;
};