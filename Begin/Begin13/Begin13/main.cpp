//
//  main.cpp
//  Begin13
//
//  Created by grafon100 on 22/11/2021.
//
//Begin13◦. Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
//Найти площади этих кругов S1 и S2, а также площадь S3 кольца, внешний радиус которого равен R1, а внутренний радиус равен R2:

//Begin13◦. Two circles with a common center and radii R1 and R2 (R1> R2) are given.
//Find the areas of these circles S1 and S2, as well as the area S3 of the ring, the outer radius of which is equal to R1, and the inner radius is equal to R2:


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double r1, r2, s1, s2, s3;
    
    cout<<"Input R1: ";
    cin>>r1;
    cout<<"R1 sould be biger R2\n";
    cout<<"Input R2: ";
    cin>>r2;
    
    s1 = M_PI*pow(r1,2);
    s2 = M_PI*pow(r2,2);
    s3 = s1 -s2;
    
    cout<<"S1 = "<<s1<<", S2 = "<<s2<<", S3 = "<<s3<<endl;
    
    return 0;
}
