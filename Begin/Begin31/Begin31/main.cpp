//
//  main.cpp
//  Begin31
//
//  Created by grafon100 on 25/11/2021.
// Begin31◦. Дано значение температуры T в градусах Фаренгейта. Определить значение этой же температуры в градусах Цельсия. Температура по Цель- сию TC и температура по Фаренгейту TF связаны следующим соотноше- нием: TC = (TF − 32)·5/9.

// Begin31◦. The temperature T is given in degrees Fahrenheit. Determine the value of the same temperature in degrees Celsius. Celsius temperature TC and Fahrenheit temperature TF are related by the following relationship: TC = (TF - 32) · 5/9.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double tF, tC;
    
    cout<<"Input temperature in degrees F: ";
    cin>>tF;
    
    tC = (tF - 32) * 5/9;
    
    cout<<"Temperature in degrees C: "<<tC<<endl;
    
    
    
    return 0;
}
