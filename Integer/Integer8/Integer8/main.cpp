//
//  main.cpp
//  Integer8
//
//  Created by grafon100 on 01/12/2021.
//
//Integer8◦. Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.

//Integer8◦. A two-digit number is given. Print the number obtained by rearranging the digits of the original number.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, tens, units, resultSwap;
    
    cout<<"Input your two-digit number: ";
    cin>>a;
    
    tens = a / 10;
    units = a % 10;
    
    resultSwap = units*10 + tens;
    
    cout<<"the number obtained by rearranging the digits: "<<resultSwap<<endl;
    
    return 0;
}
