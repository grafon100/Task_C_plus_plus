//
//  main.cpp
//  Begin35
//
//  Created by grafon100 on 28/11/2021.
//
//Begin35◦. Скорость лодки в стоячей воде V км/ч, скорость течения реки U км/ч (U < V). Время движения лодки по озеру T1 ч, а по реке (против течения) — T2 ч. Определить путь S, пройденный лодкой (путь = время · скорость). Учесть, что при движении против течения скорость лодки уменьшается на величину скорости течения.
// Begin35◦. The speed of the boat in still water is V km / h, the speed of the river is U km / h (U <V). The time of boat movement on the lake is T1 h, and along the river (upstream) - T2 h. Determine the path S covered by the boat (path = time · speed). Take into account that when moving against the current, the boat speed decreases by the value of the current speed.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double u, v, t1, t2, s1, s2, sTotal;
    cout<<"Input speed river, u: ";
    cin>>u;
    cout<<"Input speed boat, v: ";
    cin>>v;
    cout<<"Input time on the lake: ";
    cin>>t1;
    cout<<"Input time on the river: ";
    cin>>t2;
    
    
    s1 = t1 * v;
    s2 = t2 * (v - u);
    sTotal = s1 + s2;
    
    cout<<"Total distance: "<<sTotal<<endl;
    
    
    
    return 0;
}
