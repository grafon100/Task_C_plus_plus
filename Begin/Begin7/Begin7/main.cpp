//Begin7◦. Найти длину окружности L и площадь круга S заданного радиуса R: L = 2·π·R, S = π·R2.
// Begin7◦. Find the length of a circle L and the area of a circle S of a given radius R: L = 2 · π · R, S = π · R2.
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double r, l, s;
    cout<<"Input your radius ";
    cin>>r;
    
    l = 2 * M_PI * r;
    s = M_PI * pow(r,2);
    
    cout<<"S= "<<s<<", L= "<<l<<endl;
    
    
    return 0;
}
