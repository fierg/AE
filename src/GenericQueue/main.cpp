//
// Created by fierg on 7/18/23.
//
#include <iostream>
#include "Queue.cpp"

int main() {
    Queue<int> queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front element: " << queue.getFront() << std::endl;

    queue.dequeue();

    std::cout << "Front element after dequeue: " << queue.getFront() << std::endl;

    std::cout << "Is the queue empty? " << (queue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}