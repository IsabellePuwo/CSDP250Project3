//Isabelle Puwo 
//  Project 3
//  Created by Isabelle Puwo on 10/20/23.

#ifndef ConverttoBinary_hpp
#define ConverttoBinary_hpp

#include <stdio.h>
class Stack{
private:
    struct StackNode{
        int data;
        struct StackNode* next;
    };
    
    StackNode *top;
public:
    Stack();
    ~Stack();
        void push(int value);
        int Top();
        bool isEmpty();
        void pop();
        int sizeOf();
        void displayStack() const;
       void convertionstack(int number){
        if (number == 0) {
                    return;
                } else {
                    int places = number % 2;
                    push(places);
                    convertionstack(number / 2);
                }
            }
};


class Queue{
private:
    struct QueueNode{
        int data;
        struct QueueNode* next;
    };
    QueueNode* rear;
    QueueNode* front;
public:
    Queue() {
        rear = nullptr;
        front = nullptr;
    }
    ~Queue();
    void enqueue(int data);
    void dequeue();
    bool isEmpty();
    void displayQueue() const;
    void convertionQueue(Queue &q, double decimal, int places){
        if(places == 0) {
            return;
        } else {
            decimal *= 2;
            int digits = static_cast<int>(decimal);
            q.enqueue(digits);
            decimal -= digits;
            convertionQueue(q, decimal, places - 1);
        }
    }
    
};
#endif /* ConverttoBinary_hpp */

