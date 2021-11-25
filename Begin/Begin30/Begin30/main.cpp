//
//  main.cpp
//  Begin30
//
//  Created by grafon100 on 25/11/2021.
//Begin30◦. Дано значение угла α в радианах (0 < α < 2·π). Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов. В качестве значения π использовать 3.14.

//// Begin30◦. The value of the angle α is given in radians (0 <α <2 · π). Determine the value of the same angle in degrees, taking into account that 180◦ = π radians. Use 3.14 for π.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double aR, aD;
    
    cout<<"Input the angle α in radians (0<α<2*π): ";
    cin>>aR;
    
    aD = aR*180/M_PI;
    
    cout<<"α in degrees = "<<aD<<endl;
    
    
    
    
    return 0;
}
