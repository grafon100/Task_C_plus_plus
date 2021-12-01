//
//  main.cpp
//  Integer13
//
//  Created by grafon100 on 01/12/2021.
//Integer13◦. Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.

//Integer13◦. A three-digit number is given. In it, the first number on the left was crossed out and assigned to the right. Print the received number.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, hunderds, tensAndUnits, result;
    
    cout<<"Input your three-digit number: ";
    cin>>a;
    
    hunderds = a / 100;
    tensAndUnits = a % 100;
    result = tensAndUnits * 10 + hunderds;
    
    cout<<"Your number's "<<result<<endl;
    
    return 0;
}
