#ifndef REGISTER_FILE_H
#define REGISTER_FILE_H


#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

class register_file{
    public:
        vector<bitset<32>> data;
        bitset<32> readData(int addr){
            if (addr == 0) return bitset<32>(0);
            return data.at(addr);
        }
        bool writeData(int addr, bitset<32> word){
            if (addr == 0) return false;
            data.at(addr) = word;
            return true;
        }
        register_file(){
            data.resize(32);
        };
};

#endif