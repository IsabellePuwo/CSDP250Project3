//Isabelle Puwo 
//
//  Project 3
//
//  Created by Isabelle Puwo on 10/20/23.
//

#include <stdio.h>
#include <stack>
#include <queue>
#include <iostream>
#include <cmath> 
#include"Header.h"
using namespace std;

DecimaltoBinaryConverter::DecimaltoBinaryConverter(double number){
    integer = static_cast<int>(number);
    decimal = number - integer;
}


stack<int>  DecimaltoBinaryConverter:: integertoBinary(){
    stack<int> binaryStack;
    int tempInteger = integer;
    while(tempInteger > 0){
        binaryStack.push(tempInteger % 2);
         tempInteger /= 2;
    }
    return binaryStack;
}

queue<int> DecimaltoBinaryConverter::DecimaltoBinaryConversion(){
    queue<int> binaryQueue;
    double tempDecimal = decimal;
    while(tempDecimal > 0 ){
        tempDecimal *= 2;
        int bit = static_cast<int>(tempDecimal);
        binaryQueue.push(bit);
        tempDecimal -= bit;
    }
    return binaryQueue;
}

double DecimaltoBinaryConverter :: decimalPlaceConverter(int decimalPlace){
    double factor = pow(10, decimalPlace);
       return round(decimal * factor) / factor;
}

void DecimaltoBinaryConverter::display(){
    stack<int> integerBinary = integertoBinary();
    cout << "Binary Representation of Integer Part : " <<endl;
    while (!integerBinary.empty()) {
        cout << integerBinary.top();
        integerBinary.pop();
    }
    
    cout <<".";
    queue<int> decimalBinary = DecimaltoBinaryConversion();
    cout << "\nBinary Representation of Decimal Part: "<<endl;
    while (!decimalBinary.empty()) {
        cout << decimalBinary.front();
        decimalBinary.pop();
    }
    cout << endl;
}
