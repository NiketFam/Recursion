#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int fun (int n)
{ 
int x=1, k;
if (n==1) return x;
for (k=1; k<n; ++k)
x=x + fun (k) * fun (n-k);
return x;
}
int main(){
cout<<fun(5);
return 0;
}
/*
Compute Smaller Values First:
fun(1) = 1
fun(2) = fun(1) × fun(1) + 1 = 1×1 + 1 = 2
fun(3) = fun(1)×fun(2) + fun(2)×fun(1) + 1 = 1×2 + 2×1 + 1 = 5
fun(4) = fun(1)×fun(3) + fun(2)×fun(2) + fun(3)×fun(1) + 1
= 1×5 + 2×2 + 5×1 + 1 = 5 + 4 + 5 + 1 = 15
NOW COMPUTING
x = 1
x += fun(1) * fun(4) = 1 * 15 = 15   → x = 16
x += fun(2) * fun(3) = 2 * 5  = 10   → x = 26
x += fun(3) * fun(2) = 5 * 2  = 10   → x = 36
x += fun(4) * fun(1) = 15 * 1 = 15   → x = 51
IF n==2:
for (k = 1; k < 2; ++k)
    x += fun(1) * fun(1)


*/