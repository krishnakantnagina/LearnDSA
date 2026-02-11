#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n = -214748;
    unsigned int mask = 1 << 31;

    for(int i = 1; i <=31; i++){
        if((n&mask)){
            cout << 1;
        }else{
            cout << 0;
        }
        mask = mask >> 1;

    }
}
