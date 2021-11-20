//Begin5◦. Дана длина ребра куба a. Найти объем куба V = a^3 и площадь его поверхности S = 6*a^2.
//Begin5◦. Given the length of the edge of the cube a. Find the volume of a cube V = a^3 and its surface area S = 6 * a^2.


#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, v, s;
    cout<<"Input the length of the edge of the cube: ";
    cin>>a;
    v = pow(a,3);
    s = 6*pow(a,2);
    
    cout<<"V = "<<v<<", S = "<<s<<endl;
   
    return 0;
}
