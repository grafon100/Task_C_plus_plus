//Begin2◦. Дана сторона квадрата a. Найти его площадь S = a2.
//Begin2◦. The side of the square is given a. Find its area S = a^2.
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int side, s;
    cout<<"Input side: ";
    cin>>side;
    
    s = pow(side,2);
    cout<<"S = "<<s<<endl;
    
    return 0;
}
