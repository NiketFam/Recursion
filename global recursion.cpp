#include<iostream>
using namespace std;
int x = 0;
int fun(int n){
    if(n > 0){
        x++;
        return fun(n - 1) + x; //"+x" this operation will perform at return time
                               // because unless the result of this function is known,addition cannot be done
    }
    return 0;
}

int main(){
    cout << fun(5) << endl; 
    //if we call fxn next time then output will be 50 not 25
    //because x become 10  after increasing
     cout << fun(5) << endl;
    return 0;
}
