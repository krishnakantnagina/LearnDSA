#include <iostream>
#include<math.h>
using namespace std;

int main(){
   
    unsigned int n;
    cin >> n ;
    // int a = ~p;
    // int b = 1;
    unsigned int a = ~n;
    unsigned int b = 1;
    while (b !=0){
        int sum = a^b;
        int carry = (a&b) << 1;
        a = sum;
        b= carry;

    }
    int bin = a;
    int ans= 0;
    int i = 0;
    while(bin!=0){
        int bit = bin & 1;
        ans = (bit * pow(10, i)) + ans;
        bin = bin>>1;
        i++;
    }
    cout << ans << endl;
}