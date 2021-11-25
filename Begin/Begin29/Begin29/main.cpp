//
//  main.cpp
//  Begin29
//
//  Created by grafon100 on 25/11/2021.
//Begin29◦. Дано значение угла α в градусах (0 < α < 360). Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов. В качестве значения π использовать 3.14.

//Begin29◦. The value of the angle α is given in degrees (0 <α <360). Determine the value of the same angle in radians, taking into account that 180◦ = π radians. Use 3.14 for π.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double a, aR;
    
    cout<<"Input the angule α in degrees (0 < α < 360): ";
    cin>>a;
    
    aR = a*M_PI/180;
    
    cout<<"Angle in radians = "<<aR<<endl;
    
    return 0;
}
