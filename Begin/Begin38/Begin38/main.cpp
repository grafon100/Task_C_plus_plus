//
//  main.cpp
//  Begin38
//
//  Created by grafon100 on 28/11/2021.

// Begin38◦. Решить линейное уравнение A*x + B = 0, заданное своими коэффи- циентами A и B (коэффициент A не равен 0).

// Begin38◦ Solve the linear equation A * x + B = 0 given by your coefficients A and B (coefficient A is not equal to 0).


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double a, x, b;
    cout<<"Input A: ";
    cin>>a;
    cout<<"Input B: ";
    cin>>b;
    
    x = (0 - b) / a;
    if(b>=0){
        cout<<a<<" * x + "<<b<<" = 0\n";
    } else {
        cout<<a<<" * x + ("<<b<<") = 0\n";
    }
   
    cout<<"x = "<<x<<endl;
    
    return 0;
}
