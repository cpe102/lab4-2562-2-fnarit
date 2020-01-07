#include <iostream>
#include <cmath>
using namespace std;
int findDivisor(int x){
    int min = 2 ;
    while(x > 1){
        if(x % min == 0){
            return min;
        }else{
             min++;
        }
    }
}
int main(){
    cout << "Ans1 = " << findDivisor(10) << endl;
    cout << "Ans2 = " << findDivisor(97) << endl;
    cout << "Ans3 = " << findDivisor(221) << endl;
    return 0;
}
