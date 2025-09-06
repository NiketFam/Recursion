#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
void funB(int n); //here we declaring fxnB because we are using in A without declaring
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}
int main(){
funA(20);
cout<<endl;
funB(20);
return 0;
}
/*
It is for function A:-
funA(20)
=> print 20
=> call funB(19)
    => print 19
    => call funA(9)
        => print 9
        => call funB(8)
            => print 8
            => call funA(4)
                => print 4
                => call funB(3)
                    => print 3
                    => call funA(1)
                        => print 1
                        => call funB(0)
                            => (n=0, stops)

*/

/*
It is for function for B:-
funB(20)
=> print 20
=> call funA(10)
    => print 10
    => call funB(9)
        => print 9
        => call funA(4)
            => print 4
            => call funB(3)
                => print 3
                => call funA(1)
                    => print 1
                    => call funB(0)
                        => (n=0, stops)

*/