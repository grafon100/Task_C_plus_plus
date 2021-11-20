//Begin3◦. Даны стороны прямоугольника a и b. Найти его площадь S = a·b и периметр P = 2·(a + b).
//Begin3◦. The sides of the rectangle are given a and b. Find its area S = a*b and perimeter P = 2*(a + b).

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, s, p;
    cout<<"Input side a: ";
    cin>>a;
    cout<<"Input side b: ";
    cin>>b;
    
    s = a*b;
    p = 2*(a+b);
    
    cout<<"S = "<< s << ", P = "<< p <<endl;
    
    
    
    return 0;
}
