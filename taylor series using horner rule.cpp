#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
double e(int m, int n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
     s=1+m*s/n;
     return e(m,n-1);
    }
     /*
This function uses recursion and Horner's Rule to compute the value of e^x.

The Taylor series expansion of e^x is:
e^x = 1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!

Instead of calculating x^n and n! separately, which is less efficient,
we use Horner's Rule to rewrite the expansion in a nested form:

e^x = 1 + x/n * (1 + x/(n-1) * (1 + x/(n-2) * (...)))
*/
}
int main(){
cout<<e(2,3);
return 0;
}
/*
First call: e(2, 3)
s = 1 + (2 * 1 / 3) = 1 + 0.666... = 1.666...
return e(2, 2)
Second call: e(2, 2)
s = 1 + (2 * 1.666... / 2) = 1 + 1.666... = 2.666...
return e(2, 1)
Third call: e(2, 1)
s = 1 + (2 * 2.666... / 1) = 1 + 5.333... = 6.333...
return e(2, 0)

*/
