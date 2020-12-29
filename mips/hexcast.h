#ifndef HEXCAST_H
#define HEXCAST_H

#include <cstring>
#include <string>

using namespace std;

string hexcast(string h, int i){
    int h_len = h.length();
    int z_len = i-h_len;
    string f = "";
    f.append(z_len, '0');
    f.append(h);
    return f;
}


#endif