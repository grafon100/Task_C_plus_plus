//Begin4◦. Дан диаметр окружности d. Найти ее длину L = π·d. В качестве значения π использовать 3.14.
//Begin4◦. The diameter of the circle d is given. Find its length L = π · d. As use π values 3.14.

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    double d, l;
    cout<<"Input diameter of the circle: ";
    cin>>d;
    l = d / M_PI;
    
    cout<<"Length  = "<<l<<endl;
    
    
    return 0;
}
