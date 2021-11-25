//
//  main.cpp
//  Begin32
//
//  Created by grafon100 on 25/11/2021.
//
//Begin32◦. Дано значение температуры T в градусах Цельсия. Определить значение этой же температуры в градусах Фаренгейта. Температура по Цельсию TC и температура по Фаренгейту TF связаны следующим соотношением:
//  TC = (TF − 32)·5/9.

// Begin32◦. The temperature T is given in degrees Celsius. Determine the value of the same temperature in degrees Fahrenheit. The Celsius temperature TC and the Fahrenheit temperature TF are related by the following relationship: TC = (TF - 32) 5/9.


#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double tC, tF;
    
    cout<<"Input temperature in degrees C: ";
    cin>>tC;
    
    tF = tC*9/5 + 32;
    
    cout<<"temperature in degrees F: "<<tF<<endl;
    
    
    
    return 0;
}
