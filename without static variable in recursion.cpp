#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int fun(int n){
    if(n>0){
       return fun(n-1)+n;
       /*
       "+x" this operation will perform at return time
       because unless the result of this function is known,addition cannot be done
       */
    }
    return 0;
}
/*
Call	Return Value
fun(5)	fun(4) + 5 = 15
fun(4)	fun(3) + 4 = 10
fun(3)	fun(2) + 3 = 6
fun(2)	fun(1) + 2 = 3
fun(1)	fun(0) + 1 = 1
fun(0)	returns 0
*/
int main(){
fun(5);
cout<<fun(5)<<endl;;
return 0;
}