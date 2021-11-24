//
//  main.cpp
//  Begin24
//
//  Created by grafon100 on 24/11/2021.
// Begin24◦. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
// Begin24◦. Variables A, B, C are given. Change their values by moving the content of A to C, C to B, B to A, and display the new values of variables A, B, C.


#include <iostream>
using namespace  std;

int main(int argc, const char * argv[]) {
    int a, b, c;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    cout<<"Input c: ";
    cin>>c;
    
    //a>>c, c>>b b>>a;
    
    int temp = c;
    c = a;
    a = b;
    b = temp;
    
    cout<<"A="<<a<<", B="<<b<<", C="<<c<<endl;
    
    
    return 0;
}
