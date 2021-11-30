//
//  main.cpp
//  Integer5
//
//  Created by grafon100 on 30/11/2021.
//Integer5◦. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Используя операцию взятия остатка от деления нацело, найти длину незанятой части отрезка A.

//Integer5◦. Given positive integers A and B (A> B). The segment of length A contains the maximum possible number of segments of length B (without overlaps). Using the operation of taking the remainder of a whole division, find the length of the unoccupied part of the segment A.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, unoc;
    cout<<"Input A: ";
    cin>>a;
    cout<<"Input B: ";
    cin>>b;
    
    unoc = a % b;
    
    cout<<"the unoccupied part of the segment A: "<<unoc<<endl;
    
    return 0;
}
