#include <stdio.h>
#include <iostream>

using namespace std;

void fun(int n){
    if(n > 0){
        fun(n-1);
        cout << n << " ";
    }
}

int main(){
    cout << "Hello Recursion!" << endl;
    int n = 4;
    fun(n);
    return 0;
}