#include <iostream>

using namespace std;

double e(int x, int n){
    static double p=1,f=1;
    if(n==0) return 1;
    double r;
    r = e(x,n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
}

double Hornere(int x, int n){
    double s = 1;
    for(;n>0;n--){
        s = 1+(x*s)/n;
    }
    return s;
}

double recHorner(int x, int n){
    if (n==0) return 1;
    static double s=1;
    s=1+(s*x)/n;
    recHorner(x,n-1);
    return s;
}

int main(){
    cout << e(3,10) << endl;
    cout << Hornere(3,10) << endl;
    cout << recHorner(3,10) << endl;
}