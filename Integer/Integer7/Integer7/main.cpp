//
//  main.cpp
//  Integer7
//
//  Created by grafon100 on 01/12/2021.
//Integer7◦. Дано двузначное число. Найти сумму и произведение его цифр.

//Integer7◦. A two-digit number is given. Find the sum and product of its digits.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a, tens, units, sum, mult;
    
    cout<<"Input your two-degit number: ";
    cin>>a;
    
    tens = a / 10;
    units = a % 10;
    sum = tens + units;
    mult = tens * units;
    
    cout<<"Sum= "<<sum<<", Mult= "<<mult<<endl;

    return 0;
}
