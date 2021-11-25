//
//  main.cpp
//  Begin25
//
//  Created by grafon100 on 25/11/2021.
//Begin25◦. Найти значение функции y = 3x^6 − 6x^2 − 7 при данном значении x.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;
    
    cout<<"Input x: ";
    cin>>x;
    
    y = 3 * pow(x,6) - 6 * pow(x,2) - 7;
    
    
    cout<<"y = 3*x^6 − 6*x^2 − 7\n";
    cout<<"y = "<< y<< endl;
    
    return 0;
}
