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
int main(){
    int x=7;
cout<<fac(x);
//if we find factorial of negative number then  they call infinte time 
//  and then terminated let's supose  it calls 262054 calls it done and then they will stop
// because of stack overflow so if recursive function goes into infinte  recursive calls
// so at one point it will terminate because of stack overflow 
return 0; 
}