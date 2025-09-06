#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int pow(int m,int n){ //it takes more time to complete
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}
/*
how many number of calls it taken
pow(2,6) = pow(2,5) * 2
pow(2,5) = pow(2,4) * 2
pow(2,4) = pow(2,3) * 2
pow(2,3) = pow(2,2) * 2
pow(2,2) = pow(2,1) * 2
pow(2,1) = pow(2,0) * 2
pow(2,0) = 1
Time Complexity: O(n)
*/
int fpow(int m, int n){ //it take less time to complete
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return fpow(m*m,n/2);
    }
    else{
        return fpow(m*m,(n-1)/2)*m;
    }
}
/*
how many number of calls it taken
fpow(2,6)
→ n is even, so:
→ return fpow(2*2, 3) = fpow(4, 3)

fpow(4, 3)
→ n is odd
→ return fpow(4*4, 1) * 4 = fpow(16,1) * 4

fpow(16,1)
→ n is odd
→ return fpow(256, 0) * 16 = 1 * 16

Final: 16 * 4 = 64
Time Complexity: O(log n)
*/
int main(){
    int y=2,x=6;
cout<<pow(y,x)<<endl;
cout<<fpow(y,x);
return 0;
}
