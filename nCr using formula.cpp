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
int main(){
cout<<nCr(5,2)<<endl;
return 0;
}
