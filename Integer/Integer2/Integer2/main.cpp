//
//  main.cpp
//  Integer2
//
//  Created by grafon100 on 30/11/2021.
//Integer2◦. Дана масса M в килограммах. Используя операцию деления нацело, найти количество полных тонн в ней (1 тонна = 1000 кг).

//Integer2◦. The mass M is given in kilograms. Using the integer division operation, find the number of full tons in it (1 ton = 1000 kg).

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int kg, t;
    cout<<"Input mass in kg: ";
    cin>>kg;
    
    t = kg / 1000;
    
    cout<<"In "<<kg<<"kg the number full tons it: "<<t<<"t\n";
    
    return 0;
}
