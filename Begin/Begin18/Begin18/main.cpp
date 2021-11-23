//
//  main.cpp
//  Begin18
//
//  Created by grafon100 on 23/11/2021.
//Begin18◦. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B. Найти произведение длин отрезков AC и BC.
//
//Begin18◦. Three points A, B, C are given on the number axis. Point C is located between points A and B. Find the product of the lengths of the line segments AC and BC.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, ac, cb, mult;
    
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    cout<<"Input c: ";
    cin>>c;
    
    ac = abs(c - a);
    cb = abs(b - c);
    
    mult = ac * cb;
    
    cout<<"AC = "<< ac << endl;
    cout<<"CB = "<< cb << endl;
    cout<<"AC * CB = "<< mult << endl;
    
    
    return 0;
}
