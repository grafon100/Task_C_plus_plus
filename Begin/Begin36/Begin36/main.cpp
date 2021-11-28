//
//  main.cpp
//  Begin36
//
//  Created by grafon100 on 28/11/2021.
// Begin36◦. Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. Данное расстояние равно сумме начального расстояния и общего пути, проделанного автомобилями; общий путь = время · суммарная скорость.

//Begin36◦. The speed of the first car is V1 km / h, the second - V2 km / h, the distance between them is S km. Determine the distance between them in T hours, if the cars move away from each other. This distance is equal to the sum of the initial distance and the total distance traveled by the vehicles; total path = time · total speed.

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int v1, v2, s, t, sTotal;
    
    cout<<"Input speed a first car: ";
    cin>>v1;
    cout<<"Input speed a second car: ";
    cin>>v2;
    cout<<"Input distance between first and second car: ";
    cin>>s;
    cout<<"Input time on the road: ";
    cin>>t;
    
    sTotal = v1 * t + v2 * t + s;
    
    cout<<"Distance betweet two cars after "<<t<<" hours is: "<<sTotal<<endl;
    
    
    
    return 0;
}
