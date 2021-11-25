//
//  main.cpp
//  Begin27
//
//  Created by grafon100 on 25/11/2021.
//Begin27◦. Дано число A. Вычислить A^8, используя вспомогательную переменную и три операции умножения. Для этого последовательно находить A^2,A^4, A^8. Вывести все найденные степени числа A.

//Begin27◦. Given a number A. Calculate A8 using an auxiliary variable and three multiplications. To do this, sequentially find A2, A4, A8. Print all found powers of A.

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, a2, a4, a8;
    
    cout<<"Input A: ";
    cin>>a;
    
    a2 = a*a;
    a4 = a2*a2;
    a8 = a4*a4;
    
    cout<<"A^2 = "<<a2<<endl;
    cout<<"A^4 = "<<a4<<endl;
    cout<<"A^8 = "<<a8<<endl;
    

    return 0;
}
