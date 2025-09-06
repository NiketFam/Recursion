#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int F[20];
/*
This is the memoization array.
It stores previously computed values of Fibonacci to avoid recomputation.
Size 20 means it can store results up to fib(19).
Importance: Crucial for optimizing recursion. Avoids exponential time.
*/
int fib(int n){
if(n<=1){
    F[n]=n;
    /*
Base case: If n is 0 or 1, the Fibonacci value is just n.
It also stores that result in F[n] for consistency.
    */
    return n;
}
else{
    if(F[n-2]==-1){
        F[n-2]=fib(n-2);
    }
    if(F[n-1]==-1){
        F[n-1]=fib(n-1);
    }
    return F[n-2]+F[n-1];
}
    /*
If value of fib(n-2) or fib(n-1) is not already computed (i.e. -1), compute and store it.
Then return the sum of those two stored results.
This is the memoization step.
Prevents redundant recursive calls, reducing time from O(2^n) to O(n).
    */
}
int main(){
    for(int i=0;i<20;i++){

        F[i]=-1;
    }
    /*
    Initializes the memoization array to -1.
-1 means “value not yet computed.”
This is necessary so that the if(F[n-1] == -1) condition works correctly.
Without this, the array would contain garbage values, and the memoization would not work.
    */
cout<<fib(7);
return 0;
}
