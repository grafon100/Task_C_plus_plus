//
//  main.cpp
//  Begin33
//
//  Created by grafon100 on 27/11/2021.
//

//Begin33◦. Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.

//Begin33◦. It is known that X kg of sweets costs A rubles. Determine how much 1 kg and Y kg of the same sweets are worth.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double totalCostAllSweet, costOneKG, weightSweet;
    
    cout<<"Input weight your sweets: ";
    cin>>weightSweet;
    
    cout<<"Input how many kilogram sweets: ";
    cin>>totalCostAllSweet;
    
    costOneKG = totalCostAllSweet / weightSweet;
    
    cout<<"One kilogram sweets costs: "<<costOneKG<<endl;
    
    
    
    
    
    return 0;
}
