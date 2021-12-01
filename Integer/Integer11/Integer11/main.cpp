//
//  main.cpp
//  Integer11
//
//  Created by grafon100 on 01/12/2021.
//Integer11◦. Дано трехзначное число. Найти сумму и произведение его цифр.

//Integer11◦. A three-digit number is given. Find the sum and product of its digits.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, hunderts, units, tens, sum, mult;
    
    
    cout<<"Input your three-digit number: ";
    cin>>a;
    
    hunderts = a / 100;
    units = a % 10;
    tens = (a % 100 - units) / 10;
    
    sum = hunderts + tens + units;
    mult = hunderts * tens * units;
    cout<<"Sum= "<< sum<<", Mult= "<<mult<<endl;
    
    
    return 0;
}
