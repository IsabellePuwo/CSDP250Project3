//Isabelle Puwo 
// 
//  Project 3
//
//  Created by Isabelle Puwo on 10/20/23.
//

#ifndef Header_h
#define Header_h
#include<stack>
#include<queue>
#include <stdio.h>
using namespace std;

class DecimaltoBinaryConverter{
private:
    int integer;
    double decimal;
public:
    DecimaltoBinaryConverter(double);
    stack<int>integertoBinary();
    queue<int> DecimaltoBinaryConversion();
    double  decimalPlaceConverter(int);
    void display();
};



#endif /* Header_h */
