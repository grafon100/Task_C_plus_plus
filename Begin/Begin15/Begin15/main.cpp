//
//  main.cpp
//  Begin15
//
//  Created by grafon100 on 23/11/2021.

//Begin15◦. Дана площадь S круга. Найти его диаметр D и длину L окружности, ограничивающей этот круг, учитывая, что L = 2·π·R, S = π·R2. В качестве значения π использовать 3.14.
//Begin15◦. The area S of the circle is given. Find its diameter D and the length L of the circle bounding this circle, taking into account that L = 2 · π · R, S = π · R2. Use 3.14 for π.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double s, d, l, r;
    cout<<"Input area your circle: ";
    cin>>s;
    
    r = sqrt(s / M_PI);
    d = r * 2;
    l = 2 * M_PI * r;
    
    cout<<"Length your circle: "<<l<<endl;
    cout<<"Diametr your circle: "<<d<<endl;

    
    
    return 0;
}
