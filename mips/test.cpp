#include <iostream>
#include <bitset>
#include "processor.h"

using namespace std;

int main(){
    processor p ("imem.mem", "dmem.mem", "smem.mem");
    p.execute();
}