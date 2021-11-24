//
//  main.cpp
//  Begin22
//
//  Created by grafon100 on 24/11/2021.
//Begin22◦. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
// Begin22◦. Swap the contents of variables A and B and print the new values for A and B.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    
    int temp = a;
    a = b;
    b = temp;
    
    cout<<"A="<<a<<", B="<<b<<endl;
    
    
    return 0;
}
