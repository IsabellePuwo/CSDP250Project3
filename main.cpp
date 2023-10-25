//Isabelle Njunda Puwo 
//  
//  Project 3
//
//  Created by Isabelle Puwo on 10/20/23.
//
#include <iostream>
#include "ConverttoBinary.hpp"
using namespace std;
int main(){
    Stack myStack;
    Queue myQueue;
    double Number;
    int Places;
    
    cout << "Please enter decimal number: ";
    cin >> Number;
    
    int IntegerPart = static_cast<int>(Number);
    double DecimalPart = Number - IntegerPart;
    
    if (DecimalPart != 0) {
        do {
            cout << "How many decimal places do want it to be rounded to  ";
            cin >> Places;
        } while (Places < 1);
        myQueue.convertionQueue(myQueue, DecimalPart, Places);
    }
    myStack.convertionstack(IntegerPart);
    
    cout << "Binary conversion: ";
       myStack.displayStack();

       if (DecimalPart != 0) {
           cout << ".";
           myQueue.displayQueue();
       }

       cout << endl;

       return 0;
}
