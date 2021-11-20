//  main.cpp
//  Begin10
//
//  Created by grafon100 on 18/11/2021.

//Begin10◦. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.
//Begin10◦. Two non-zero numbers are given. Find the sum, difference, product and the quotient of their squares.

#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    double a, b, sum, sub, mul, div;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    
    a *= a;
    b *= b;
    
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    
    cout<<"a^2 = "<<a<<", b^2 = "<<b<<endl;
    cout<<"sum: "<<sum<<", sub: "<<sub<<endl;
    cout<<"mul: "<<mul<<", div: "<<div<<endl;
    
    return 0;
}
