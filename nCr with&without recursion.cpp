#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return fac(n-1)*n;
    }
}
int nCr(int n,int r){
    int num,den;
    num=fac(n);
    den=fac(r)*fac(n-r);
    return num/den;
}
int NCR(int n,int r){
    if(n==r||r==0){
        return 1;
    }
        else{
        return NCR(n-1,r-1)+NCR(n-1,r);
        }
    /*
 This is based on the recursive identity from Pascal's Triangle:
 C(n, r) = C(n - 1, r - 1) + C(n - 1, r)
 Base cases:
 If n == r: There's only 1 way to choose all elements => C(n, n) = 1
 If r == 0: There's only 1 way to choose 0 elements => C(n, 0) = 1
 Recursive step:
 Break the problem into two subproblems:
 1. Choosing r-1 from n-1 (include current element)
 2. Choosing r from n-1 (exclude current element)
 Add the results of both to get C(n, r)
    */
}
int main(){
    cout<<"using without recursion "<<endl;
    cout<<nCr(5,2)<<endl;
    cout<<"using with recursion "<<endl;
cout<<NCR(5,2)<<endl;
return 0;
}
