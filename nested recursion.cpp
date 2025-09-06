#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}
int main(){
cout<<fun(95)<<endl;
return 0;
}
/*
 Input     Goes to             Then becomes 
 fun(95)  fun(106) = 96        fun(96)      
 fun(96)  fun(107) = 97        fun(97)      
 fun(97)  fun(108) = 98        fun(98)      
 fun(98)  fun(109) = 99        fun(99)      
 fun(99)  fun(110) = 100       fun(100)     
 fun(100) fun(111) = 101       fun(101)     
 fun(101) 91 (since 101 > 100)              
*/