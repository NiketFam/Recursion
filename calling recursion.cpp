#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
void fun1(int n){
   if(n>0){
     cout<<n<<endl;
    fun1(n-1); // in this first perform the operation,then the recursive call
   }
}
int main(){
int x=3;
fun1(x);
return 0;
}