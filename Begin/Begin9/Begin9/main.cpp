//Begin9◦. Даны два неотрицательных числа a и b. Найти их среднее геометрическое, то есть квадратный корень из их произведения: √a·b.
// Begin9◦. You are given two non-negative numbers a and b. Find their geometric mean, that is, the square root of their product: √a · b.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double a, b, srG;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    srG = sqrt(a*b);
    
    cout<<"srG = "<<srG<<endl;
    
    return 0;
}
