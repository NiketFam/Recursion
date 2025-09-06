#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
/*
n=number of disk
a,b,c=tower
*/
void hanoi(int n,int a,int b,int c){
    if(n>0){
        hanoi(n-1,a,c,b);
        /*
        n-1=calling itself
        first move from a to b but using c 
        that's why c is in the middle
        */
        cout<<"("<<a<<","<<c<<")"<<endl;
        //source tower is a and destination tower is c
        hanoi(n-1,b,a,c);
        /*
        now we move from b to c but using a 
        that's why a is in the middle
        */
    }
}
int main(){
hanoi(3,1,2,3);
return 0;
}
