//
//  main.cpp
//  Integer1
//
//  Created by grafon100 on 30/11/2021.
//
//Integer1◦. Дано расстояние L в сантиметрах. Используя операцию деления нацело, найти количество полных метров в нем (1 метр = 100 см).
// Integer1◦. The distance L is given in centimeters. Using the integer division operation, find the number of full meters in it (1 meter = 100 cm).

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int l, m;
    cout<<"Input distance L in cm: ";
    cin>>l;
    
    m = l /100;
    
    cout<<"Number full meters in "<<l<<"cm it: "<<m<<"m\n";
    
    return 0;
}
