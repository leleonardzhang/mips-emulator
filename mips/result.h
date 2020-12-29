#include <bitset>
#include <string>

struct result{
    string name;
    bitset<5> rs, rt, rd;
    bitset<16> imm;
    bitset<26> j_target;
    bitset<5> shamt;
};