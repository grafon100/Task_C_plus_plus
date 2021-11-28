//
//  main.cpp
//  Begin39
//
//  Created by grafon100 on 28/11/2021.
//

//Begin39◦. Найти корни квадратного уравнения A·x2 + B·x + C = 0, заданного своими коэффициентами A, B, C (коэффициент A не равен 0), если известно, что дискриминант уравнения положителен. Вывести вначале меньший, а затем больший из найденных корней.

// Begin39◦. Find the roots of the quadratic equation A x2 + B x + C = 0, given by its coefficients A, B, C (coefficient A is not equal to 0), if it is known that the discriminant of the equation is positive. Derive first the smaller and then the larger of the found roots.

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    double a, b, c, d, x1, x2;
    cout<<"Input a: ";
    cin>>a;
    cout<<"Input b: ";
    cin>>b;
    cout<<"Input c: ";
    cin>>c;
    
    d = pow(b,2) - 4 * a * c;
    
    x1 = ((-1)*b + sqrt(d))/(2*a);
    x2 = ((-1)*b - sqrt(d))/(2*a);
    
    if(x1<x2)
    {
        cout<<"x1 = "<<x1<<", x2 = "<<x2<<endl;
    }
    else
    {
        cout<<"x2 = "<<x2<<", x1 = "<<x1<<endl;
    }
    
    return 0;
}
