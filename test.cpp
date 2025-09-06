#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int f[20];
int fun(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        if(f[n-1]==-1){
        cout<<n<<" ";
       return fun(n-1);
        return fun(n-1);
        }
    }
}
int main(){
fun(3);
return 0;
}