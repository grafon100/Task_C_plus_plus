//
//  main.cpp
//  Begin20
//
//  Created by grafon100 on 23/11/2021.
//
//Begin20◦. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2) на плоскости.
//Begin20◦. Find the distance between two points with the given coordinates (x1, y1) and (x2, y2) on the plane.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double x1, y1, x2, y2, dist;
    
    cout<<"Input x1: ";
    cin>>x1;
    cout<<"Input y1: ";
    cin>>y1;
    cout<<"Input x2: ";
    cin>>x2;
    cout<<"Input y2: ";
    cin>>y2;
    
    dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    
    cout<<"Distance between two points: "<<dist<<endl;
    
    return 0;
}
