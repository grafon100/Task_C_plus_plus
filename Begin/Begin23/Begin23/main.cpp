//
//  main.cpp
//  Begin23
//
//  Created by grafon100 on 24/11/2021.
//Begin23◦. Даны переменные A, B, C. Изменить их значения, переместив содер- жимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.

// Begin23◦. Variables A, B, C are given. Change their values by moving the content of A to B, B to C, C to A, and display the new values of variables A, B, C.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    cout<<"Input c: ";
    cin>>c;
    
    //a>>b, b>>c, c>>a
    int temp = b;
    b = a;
    a = c;
    c = temp;
    
    
    cout<<"A="<<a<<", B="<<b<<", C="<<c<<endl;
    
    return 0;
}
