#include<iostream>
using namespace std;

int main(){
    int f = 0, s = 1, sum = 0;
    int n;
    cout << "Enter the position (n) to get nth Fibonacci number: ";
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    } else if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    for(int i = 2; i <= n; i++){
        sum = f + s;
        f = s;
        s = sum;
    }

    cout << s << endl;
    return 0;
}
