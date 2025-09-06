#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(n-1)+n;
    }
}
int main(){
    int x=7;
cout<<sum(x);
return 0;
}
