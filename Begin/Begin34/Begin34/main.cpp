//
//  main.cpp
//  Begin34
//
//  Created by grafon100 on 27/11/2021.
//Begin34◦. Известно, что X кг шоколадных конфет стоит A рублей, а Y кг ирисок стоит B рублей. Определить, сколько стоит 1 кг шоколадных конфет, 1 кг ирисок, а также во сколько раз шоколадные конфеты дороже ирисок.

// Begin34◦. It is known that X kg of chocolates costs A rubles, and Y kg of toffee costs B rubles. Determine how much 1 kg of chocolates, 1 kg of toffee, and how many times are more expensive than toffee.


#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double chocSweetTotalCost, chocSweetWeight, chocSweetCostOneKG, tofSweetTotalCost, tofSweetWeight, tofSweetCostOneKG, differenceCost;
    
    cout<<"Cost chocolates: ";
    cin>>chocSweetTotalCost;
    cout<<"Total weight chocolates: ";
    cin>>chocSweetWeight;
    
    cout<<"Cost toffee: ";
    cin>>tofSweetTotalCost;
    cout<<"Total weight toffee: ";
    cin>>tofSweetWeight;
    
    chocSweetCostOneKG = chocSweetTotalCost / chocSweetWeight;
    
    tofSweetCostOneKG = tofSweetTotalCost / tofSweetWeight;
    
    
    differenceCost = chocSweetCostOneKG / tofSweetCostOneKG;
    
    
    cout<<"Cost 1kg chocolate sweets: "<<chocSweetCostOneKG<<endl;
    cout<<"Cost 1kg toffee sweets: "<<tofSweetCostOneKG<<endl;
    
    cout<<"Chocolate sweets cost more toffee: "<<differenceCost<<endl;
    
    
    
    
    
    
    return 0;
}
