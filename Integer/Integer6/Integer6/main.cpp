//
//  main.cpp
//  Integer6
//
//  Created by grafon100 on 01/12/2021.
//Integer6◦. Дано двузначное число. Вывести вначале его левую цифру (десят- ки), а затем — его правую цифру (единицы). Для нахождения десятков использовать операцию деления нацело, для нахождения единиц — опе- рацию взятия остатка от деления.

//Integer6◦. A two-digit number is given. First, output its left digit (tens), and then - its right digit (units). To find tens, use the operation of division entirely, to find units, use the operation of taking the remainder of the division.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, tens, units;
    
    cout<<"Input your two-digit number: ";
    cin>>a;
    
    tens = a / 10;
    units = a % 10;
    
    cout<<"Tens= "<<tens<<", Units="<<units<<endl;
    
    
    
    return 0;
}
