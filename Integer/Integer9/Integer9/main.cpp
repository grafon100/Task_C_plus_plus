//
//  main.cpp
//  Integer9
//
//  Created by grafon100 on 01/12/2021.
//
//Integer9◦. Дано трехзначное число. Используя одну операцию деления нацело, вывести первую цифру данного числа (сотни).

//Integer9◦. A three-digit number is given. Using one integer division operation, print the first digit of the given number (hundreds).

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, hundreds;
    
    cout<<"Input your three-digit number: ";
    cin>>a;
    
    hundreds = a / 100;
    
    cout<<"Number hundreds: "<<hundreds<<endl;
    
    return 0;
}
