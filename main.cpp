//Isabelle Njunda Puwo 
//  
//  Project 3
//
//  Created by Isabelle Puwo on 10/20/23.
//

#include <iostream>
#include<stack>
#include<queue>
#include "Header.h"
#include"cppfile.cpp"

using namespace std;
 
int main(){
    double number;
    int decimalPlace;
    cout<<"Please enter a decimal number: "<<endl;
    cin>> number;
    DecimaltoBinaryConverter Converter(number);
    cout<<"How many decimal places do want it to be rounded to ?"<<endl;
    cin>> decimalPlace;

    stack<int>binaryIntegerPart = Converter.integertoBinary();
    queue<int>binaryDecimalPart = Converter.DecimaltoBinaryConversion();
    double roundedValue = Converter.decimalPlaceConverter(decimalPlace);
    cout<<"Rounded Value: "<< roundedValue<<endl;
    Converter.display();
    return 0;
}
