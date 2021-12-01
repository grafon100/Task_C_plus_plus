//
//  main.cpp
//  Integer10
//
//  Created by grafon100 on 01/12/2021.
//Integer10◦. Дано трехзначное число. Вывести вначале его последнюю цифру (единицы), а затем — его среднюю цифру (десятки).

//Integer10◦. A three-digit number is given. First, output its last digit (units), and then - its average digit (tens).

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, units, tens;
    
    cout<<"Input your three-digit number: ";
    cin>>a;
    
    units = a % 10;
    tens = a % 100 - units;
    
    cout<<"Units= "<<units<<", Tens= "<<tens<<endl;
    
    
    return 0;
}
