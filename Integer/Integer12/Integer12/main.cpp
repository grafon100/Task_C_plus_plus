//
//  main.cpp
//  Integer12
//
//  Created by grafon100 on 01/12/2021.
//Integer12◦. Дано трехзначное число. Вывести число, полученное при прочтении исходного числа справа налево.

//Integer12◦. A three-digit number is given. Print the number obtained by reading the original number from right to left.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, hunderds, tens, units, result;
    
    cout<<"Input your three-digit number: ";
    cin>>a;
    
    hunderds = a / 100;
    units = a % 10;
    tens = a % 100 - units;
    
    
    result = units*100 + tens + hunderds;
    
    cout<<"Your new numbr's: "<<result<<endl;
    
    
    return 0;
}
