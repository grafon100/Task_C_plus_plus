//
//  main.cpp
//  Begin11
//
//  Created by grafon100 on 22/11/2021.
//
//Begin11◦. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их модулей.

//Begin11◦. Two non-zero numbers are given. Find the sum, difference, product and quotient of their modules.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    float first, second, sum, sub, div, mul;
    cout<<"Input your first number ";
    cin>>first;
    
    cout<<"Input your second number ";
    cin>>second;
    
    sum = abs(first) + abs(second);
    sub = abs(first) - abs(second);
    mul = abs(first) * abs(second);
    div = abs(first) / abs(second);
    
    cout<<"abs("<<first<<") + abs("<<second<<") = "<<sum<<endl;
    cout<<"abs("<<first<<") - abs("<<second<<") = "<<sub<<endl;
    cout<<"abs("<<first<<") / abs("<<second<<") = "<<div<<endl;
    cout<<"abs("<<first<<") * abs("<<second<<") = "<<mul<<endl;
    
    return 0;
}
