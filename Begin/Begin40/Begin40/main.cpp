//
//  main.cpp
//  Begin40
//
//  Created by grafon100 on 28/11/2021.
//
//Begin40◦. Найти решение системы линейных уравнений вида
//A1·x + B1·y = C1,
//A2·x + B2·y = C2,
//заданной своими коэффициентами A1, B1, C1, A2, B2, C2, если известно, что данная система имеет единственное решение.

// Begin40◦. Find a solution to a system of linear equations of the form
// A1 x + B1 y = C1,
// A2 x + B2 y = C2,
// given by its coefficients A1, B1, C1, A2, B2, C2, if it is known that this system has a unique solution.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double a1, b1, c1, d, a2, b2, c2, x, y;

    cout<<"\t| A1*x + B1*y = C1,"<<endl;
    cout<<"\t<"<<endl;
    cout<<"\t| A2*x + B2*y = C2;"<<endl;
    cout<<"----------------------------\n";

    cout<<"Input A1: ";
    cin>>a1;
    cout<<"Input B1: ";
    cin>>b1;
    cout<<"Input C1: ";
    cin>>c1;
    cout<<"\n-----------------\nInput A2: ";
    cin>>a2;
    cout<<"Input B2: ";
    cin>>b2;
    cout<<"Input C2: ";
    cin>>c2;
    
    
    d = a1*b2 - a2*b1;
    x = (c1*b2 - c2*b2) / d;
    y = (a1*c2 - a2*c1) / d;
    
    
    cout<<"\t| "<<a1<<"*x + "<<b1<<"*y = "<<c1<<","<<endl;
    cout<<"\t<"<<endl;
    cout<<"\t| "<<a2<<"*x + "<<b2<<"*y = "<<c2<<";"<<endl;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    
    return 0;
}
