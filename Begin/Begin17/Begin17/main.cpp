//
//  main.cpp
//  Begin17
//
//  Created by grafon100 on 23/11/2021.
//Begin17◦. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.
//Begin17◦. Three points A, B, C are given on the number axis. Find the lengths of the segments AC and BC and their sum.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, distAB, distBC, allDist;
    cout<<"Input point a: ";
    cin>>a;
    cout<<"Input point b: ";
    cin>>b;
    cout<<"Input point c: ";
    cin>>c;
    
    distAB = abs(b - a);
    distBC = abs(c - b);
    
    allDist = distAB + distBC;
    
    cout<<"Distance between A B: "<< distAB<<endl;
    cout<<"Distance between B C: "<< distBC<<endl;
    cout<<"All distance: "<<allDist<<endl;
    
    return 0;
}
