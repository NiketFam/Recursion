#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
    return fib(n-2)+fib(n-1);
    }
}
int main(){
cout<<fib(7);
return 0;
}
/*
The recursive Fibonacci function takes more time because it repeatedly 
solves the same subproblems. For example, fib(3) or fib(2) are called many times 
from different branches. This causes the total number of function calls to grow exponentially. 
The recursion forms a binary tree of height n, leading to a time complexity of O(2^n).

*/
