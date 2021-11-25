//
//  main.cpp
//  Begin28
//
//  Created by grafon100 on 25/11/2021.
//Begin28◦. Дано число A. Вычислить A15, используя две вспомогательные переменные и пять операций умножения. Для этого последовательно находить A2, A3, A5, A10, A15. Вывести все найденные степени числа A.

// Begin28◦. Given a number A. Calculate A15 using two auxiliary variables and five multiplications. To do this, sequentially find A^2, A^3, A^5, A^10, A^15. Print all found powers of A.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, a2, a3, a5, a10, a15;
    
    cout<<"Input A: ";
    cin>>a;
    
    a2 = a*a;
    a3 = a2*a;
    a5 = a2*a3;
    a10 = a5*a5;
    a15 = a10*a5;
    
    cout<<"A^2 = "<<a2<<endl;
    cout<<"A^3 = "<<a3<<endl;
    cout<<"A^5 = "<<a5<<endl;
    cout<<"A^10 = "<<a10<<endl;
    cout<<"A^15 = "<<a15<<endl;
    
    
    return 0;
}
