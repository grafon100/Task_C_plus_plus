//Begin6◦. Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти его объем V = a·b·c и площадь поверхности S = 2·(a·b + b·c + a·c).
//Begin6◦. The lengths of the edges a, b, c of a rectangular parallelepiped are given. Find its volume V = a*b*c and surface area S = 2*(a*b + b*c + a*c).
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a, b, c, s, v;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    cout<<"Input c: ";
    cin>>c;
    
    s = 2*(a*b + b*c + a*c);
    v = a*b*c;
    
    cout<<"S= "<<s<<", V= "<<v<<endl;
    
    return 0;
}
