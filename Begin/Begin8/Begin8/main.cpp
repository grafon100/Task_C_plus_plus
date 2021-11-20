//Begin8◦. Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2.
//Begin8◦. You are given two numbers a and b. Find their arithmetic mean: (a + b) / 2.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double a, b, sr;
    cout<<"Input first number: ";
    cin>>a;
    cout<<"Input second number: ";
    cin>>b;
    
    sr = (a + b) / 2;
    cout<<"Sr = "<<sr<<endl;
    
    return 0;
}
