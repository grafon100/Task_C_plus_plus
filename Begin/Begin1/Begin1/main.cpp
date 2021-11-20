//Begin1◦. Дана сторона квадрата a. Найти его периметр P = 4*a.
//Begin1◦. The side of the square is given a. Find its perimeter P = 4 * a.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int side, p;
    
    cout<<"Input side of the square: ";
    cin>>side;
    
    p = 4*side;
    
    cout<<"Perimeter's the square with side  "<<side<<" is: "<<p<<endl;
    
    return 0;
}
