//Isabelle Puwo 
//
//  Project 3
//
//  Created by Isabelle Puwo on 10/20/23.
//

#include "ConverttoBinary.hpp"
#include <iostream>
using namespace std;


Stack::~Stack() {
    while (!isEmpty()) pop();
}

Stack::Stack() : top(nullptr) {}

void Stack::pop() {
    if (!isEmpty()) {
        StackNode* temp = top;
        top = top->next;
        delete temp;
    }
}

void Stack::push(int data) {
    StackNode* newNode = new StackNode;
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

int Stack::Top() {
    return top->data;
}

void Stack::displayStack() const {
    StackNode* current = top;
    while (current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
    cout << endl;
}

int Stack::sizeOf() {
    int count = 0;
    StackNode* current = top;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
Queue::~Queue() {
    while (front) {
        QueueNode* nodePtr = front;
        front = front->next;
        delete nodePtr;
    }
}

void Queue::enqueue(int data) {
    QueueNode* newNode = new QueueNode;
    newNode->data = data;
    newNode->next = nullptr;
    
    if (!front) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void Queue::dequeue() {
    if (front) {
        QueueNode* newNode = front;
        front = front->next;
        delete newNode;
    }
}

bool Queue::isEmpty() {
    return front == nullptr;
}

void Queue::displayQueue() const {
    QueueNode* current = front;
    while (current != nullptr) {
        cout << current->data<< " ";
        current = current->next;
    }
    cout << endl;
}
