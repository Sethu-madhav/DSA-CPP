#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &vc){
    if(n <= 1) return n;

    if(vc[n] != -1) return vc[n];
    return fib(n-1, vc) + fib(n-2, vc);
}

int fibMemo(int n){
    int a = 0;
    int b = 1;

    int c = 0;
    for(int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n = 7;
    vector<int> vc(n+1,-1);
    cout << fibMemo(1000);
}
