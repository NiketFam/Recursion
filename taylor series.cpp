#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
double e(int m,int n){ // here m is the value and n is number of times
static double p=1,f=1; //static means: these variables retain their values between recursive calls.
double r;
if(n==0){
    return 1;
}
else{
  r=e(m,n-1);
  p=p*m;
  f=f*n;
   return r+p/f;
}
}
int main(){
cout<<e(2,3);
return 0;
}
/*
| Call    | p (power) | f (factorial) | term         | cumulative sum |
| ------- | --------- | ------------- | ------------ | -------------- |
| e(2, 0) | –         | –             | 1            | 1              |
| e(2, 1) | 2         | 1             | 2 / 1 = 2    | 3              |
| e(2, 2) | 4         | 2             | 4 / 2 = 2    | 5              |
| e(2, 3) | 8         | 6             | 8 / 6 ≈ 1.33 | 6.333...       |

*/
