//
//  main.cpp
//  Integer4
//
//  Created by grafon100 on 30/11/2021.
//Integer4◦. Даны целые положительные числа A и B (A > B). На отрезке дли- ны A размещено максимально возможное количество отрезков длины B (без наложений). Используя операцию деления нацело, найти количество отрезков B, размещенных на отрезке A.

//Integer4◦. Given positive integers A and B (A> B). The segment of length A contains the maximum possible number of segments of length B (without overlapping). Using integer division, find the number of line segments B located on line segment A.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, bInA;
    cout<<"Input A: ";
    cin>>a;
    cout<<"Input B: ";
    cin>>b;
    
    bInA = a / b;
    
    cout<<"In A="<<a<<" max possible number of segments of length B="<<b<<" it: "<<bInA<<endl;
    
    
    
    return 0;
}
