//
//  main.cpp
//  Begin16
//
//  Created by grafon100 on 23/11/2021.
//
//Begin16◦. Найти расстояние между двумя точками с заданными координата- ми x1 и x2 на числовой оси: |x2 − x1|.

//Begin16◦. Find the distance between two points with given coordinates x1 and x2 on the number axis: | x2 - x1 |.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int x1, x2, dist;
    cout<<"Input coordinates x1: ";
    cin>>x1;
    
    cout<<"Input coordinates x2: ";
    cin>>x2;
    
    dist = abs(x2 - x1);
    
    cout<<"Distance between two points: "<<dist<<endl;
    
    
    return 0;
}
