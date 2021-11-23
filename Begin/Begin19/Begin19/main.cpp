//
//  main.cpp
//  Begin19
//
//  Created by grafon100 on 23/11/2021.
//Begin19◦. Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2). Стороны прямоугольника параллельны осям координат. Найти периметр и площадь данного прямоугольника.

//Begin19◦. The coordinates of two opposite vertices of the rectangle are given: (x1, y1), (x2, y2). The sides of the rectangle are parallel to the coordinate axes. Find the perimeter and area of the given rectangle.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int x1, x2, y1, y2, x1x2, y1y2, p, s;
    
    cout<<"Input x1: ";
    cin>>x1;
    cout<<"Input y1: ";
    cin>>y1;
    cout<<"Input x2: ";
    cin>>x2;
    cout<<"Input y2: ";
    cin>>y2;
    
    x1x2 = abs(x2 - x1);
    y1y2 = abs(y2 - y1);
   
    
    p = 2 * (x1x2 + y1y2);
    s = x1x2 * y1y2;
    
   
    cout<<"P = "<<p<<endl;
    cout<<"S = "<<s<<endl;
    
   
    
    
    return 0;
}
