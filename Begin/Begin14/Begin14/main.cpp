//
//  main.cpp
//  Begin14
//
//  Created by grafon100 on 23/11/2021.
//
//Begin14◦. Дана длина L окружности. Найти ее радиус R и площадь S круга, ограниченного этой окружностью, учитывая, что L = 2·π·R, S = π·R^2. В качестве значения π использовать 3.14.
//
//Begin14◦. Given the length L of the circle. Find its radius R and area S of the circle bounded by this circle, taking into account that L = 2 · π · R, S = π · R^2. Use 3.14 for π.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double l, s, r;
    
    cout<<"Input length of the circle: ";
    cin>>l;
    
    r = l / 2 / M_PI;
    s = M_PI*pow(r,2);
    
    cout<<"Radius your circle = "<<r<<"\n Area your circle: = " << s << endl;
    
    return 0;
}
