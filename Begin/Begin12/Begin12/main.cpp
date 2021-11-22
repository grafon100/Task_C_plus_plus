//
//  main.cpp
//  Begin12
//
//  Created by grafon100 on 22/11/2021.
//
//Begin12◦. Даны катеты прямоугольного треугольника a и b. Найти его гипотенузу c и периметр P
//Begin12◦. Given the legs of a rightangled triangle a and b. Find its hypotenuse c and perimeter

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    float a, b, c, p;
    cout<<"Input side a: ";
    cin>>a;
    cout<<"Input side b: ";
    cin>>b;
    
    c = sqrt(pow(a,2) + pow(b,2));
    p = a + b + c;
    
    cout<<"C = "<<c<<", P = "<<p<<endl;
    
    
    
    
    
    return 0;
}
