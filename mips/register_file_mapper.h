#include <iostream>
#include <bitset>
using namespace std;

int register_file_mapper(bitset<5> register_addr){
    int m = int(register_addr.to_ulong());
    return m;
}