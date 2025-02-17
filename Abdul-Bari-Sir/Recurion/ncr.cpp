#include <iostream>

int fact(int n){
    if (n == 0 || n == 1) return 1;

    return fact(n-1) * n;
}

int ncr(int n,int r){
    int num=fact(n);
    int denum=fact(r)*fact(n-r);
    return num/denum;
}

int NCR(int n, int r){
    if(n==r || r==0) return 1;
    return NCR(n-1,r-1)+NCR(n-1,r);
}

using namespace std;

int main(){
    cout << ncr(5,2) << endl;
    cout << NCR(5,2) << endl;
}