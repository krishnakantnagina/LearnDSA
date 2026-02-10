#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=2*n){
        int temp1 = i;
        while(temp1 <= n && temp1 == i){
            int a = 1;
            
            while(a<=temp1){
                cout << "*";
                a =a + 1;
            }    
            int space = (n-temp1)*2;
            while(space){
                cout << " ";
                space --;
            }
            int b = 1;
            while(b <= temp1){
                cout << "*";
                b = b + 1;
            }
            temp1++;
        }

        int temp2 = i;
        while(temp2 > n && temp2 == i){
            int c = 2*n-temp2+1;
            while(c > 0){
                cout << "*";
                c--;
            }

            int space1 = (temp2-n-1)*2;
            while(space1){
                cout << " ";
                space1 --;
            }

            int d = 2*n-temp2+1;
            while(d>0){
                cout << "*";
                d--;
            }
            temp2++;
        }
        cout << endl;
        i++;
        
    }
}   

