#include <iostream>
#include <stdio.h>

using namespace std;

int fun(int n){
    static int x=0;
    if (n > 0){
        x++;
        int res = fun(n-1)+x;
        return res;
    }
    return 0;
}
// C:\msys64\mingw64\bin

int main(){
    int n = 5;
    cout << fun(n);
    return 0;
}