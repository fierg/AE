//
// Created by fierg on 7/18/23.
//
template<typename T>
class ListElement {
public:
    ListElement(const T& value) : data(value), next(nullptr) {}

    T getData() const {
        return data;
    }

    void setNext(ListElement* nextElement) {
        next = nextElement;
    }

    ListElement* getNext() const {
        return next;
    }

private:
    T data;
    ListElement* next;
};