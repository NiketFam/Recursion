#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main(){
fun(3);
return 0;
}/*
1)fun(3)

 ->prints 3

 ->calls fun(2)

    ->prints 2

    ->calls fun(1)

        ->prints 1

        ->calls fun(0) → returns

        ->calls fun(0) → returns

    ->calls fun(1)

        ->prints 1

        ->calls fun(0) → returns

        ->calls fun(0) → returns

 ->calls fun(2)

   ->prints 2

   ->calls fun(1)

      ->prints 1

      ->calls fun(0) → returns

      ->calls fun(0) → returns

    ->calls fun(1)

      ->prints 1

      ->calls fun(0) → returns

      ->calls fun(0) → returns
*/

/*
             fun(3)
             /    \
         fun(2)   fun(2)
         /   \     /   \
     fun(1) fun(1) fun(1) fun(1)
     / \     / \    / \    / \
   f(0)f(0)f(0)f(0)f(0)f(0)f(0)f(0)

*/
