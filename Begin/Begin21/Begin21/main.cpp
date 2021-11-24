//
//  main.cpp
//  Begin21
//
//  Created by grafon100 on 24/11/2021.
// Begin21◦. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь, используя формулу для расстояния между двумя точками на плоскости (см. задание Begin20). Для нахождения площади треугольника со сторонами a, b, c использовать формулу Герона:

// Begin21◦. The coordinates of the three vertices of the triangle are given: (x1, y1), (x2, y2), (x3, y3). Find its perimeter and area using the formula for the distance between two points on the plane (see the Begin20 task). To find the area of a triangle with sides a, b, c, use Heron's formula:

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double x1, y1, x2, y2, x3, y3,  p, s, AB, BC, CA;
    
    cout<<"Input x1: ";
    cin>>x1;
    cout<<"Input y1: ";
    cin>>y1;
    
    cout<<"Input x2: ";
    cin>>x2;
    cout<<"Input y2: ";
    cin>>y2;
    
    cout<<"Input x3: ";
    cin>>x3;
    cout<<"Input y3: ";
    cin>>y3;
    
    AB = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    BC = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    CA = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
    
    p = AB + BC + CA;
    double halfP = p/2;
    s = sqrt(halfP*(halfP-AB) * (halfP-BC) * (halfP-CA));
    
    cout<<"Pabc = "<<p<<", Sabc= "<<s<<endl;
    
    return 0;
}
