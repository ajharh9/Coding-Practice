#include <iostream>

using namespace std;

static int f[1000];

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int Ifib(int n){
    if(n<=1) return n;
    int f1 = 0;
    int f2 = 1;
    int res = 1;

    for(;n>=2;n--){
        res = f1+f2;
        f1 = f2;
        f2 = res; 
    }

    return res;
}

int effFib(int n){
    if(n<=1){
        f[n] = n;
        return n;
    }
    if(f[n-1] == -1){
        f[n-1] = effFib(n-1);
    }
    if(f[n-2] == -1){
        f[n-2] = effFib(n-2);
    }

    return f[n-1]+f[n-2];
}

int main(){
    fill_n(f, 1000, -1);
    cout << fib(10) << endl;
    cout << Ifib(10) << endl;
    cout << effFib(10) << endl;
    return 0;
}