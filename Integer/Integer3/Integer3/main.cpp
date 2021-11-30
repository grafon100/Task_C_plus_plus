//
//  main.cpp
//  Integer3
//
//  Created by grafon100 on 30/11/2021.
//Integer3◦. Дан размер файла в байтах. Используя операцию деления нацело, найти количество полных килобайтов, которые занимает данный файл (1 килобайт = 1024 байта).

//Integer3◦. The size of the file is given in bytes. Using the integer division operation, find the number of full kilobytes this file occupies (1 kilobyte = 1024 bytes).

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int b, kb;
    cout<<"Input size in bybes: ";
    cin>>b;
    
    kb = b / 1024;
    
    cout<<"In "<<b<<"bytes the number full kilobytes this file occupies: "<<kb<<"kilobyte\n";
    
    return 0;
}
