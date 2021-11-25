//
//  main.cpp
//  Begin26
//
//  Created by grafon100 on 25/11/2021.
//
//Begin26◦. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x.

// Begin26◦. Find the value of the function y = 4 (x − 3)^6 - 7 (x − 3)^3 + 2 for a given value of x.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int x, y;
    
    cout<<"Input x: ";
    cin>>x;
    
    y = 4*pow(x-3,6)-7*pow(x-3,3) + 2;
    
    cout<<"y = 4*(x − 3)^6 - 7*(x − 3)^3 + 2\n";
    cout<<"y = "<<y<<endl;
    
    
    
    return 0;
}
