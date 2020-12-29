#include <iostream>
#include "decoder.h"
#include <bitset>

int main(){
    decoder d = decoder();
    cout << d.decode(0x08100011).j_target << endl;
}