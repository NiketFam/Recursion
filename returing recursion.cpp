#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
void fun2(int n){
   if(n>0){
    fun2(n-1); //here first the recursive call then perform the operation
    cout<<n<<endl;
   }
}
int main(){
int x=3;
fun2(x);
return 0;
}