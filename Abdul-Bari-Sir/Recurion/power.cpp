#include <iostream>

int pow(int n, int m){
    if(m==0) return 1;
    return n*pow(n,m-1);
}

int EPow(int n, int m){
    if (m == 0) return 1;
    else if(m % 2==0){
        return pow(n*n, m/2);
    }else{
        return n*pow(n*n, (m-1)/2);
    }
}

int LPow(int n, int m){
    int pow = 1;
    for(int i=1;i<=m;i++){
        pow = pow*n;
    }
    return pow;
}

int main(){
    std::cout << pow(2,5) << std::endl;
    std::cout << EPow(2,5) << std::endl;
    std::cout << LPow(2,5) << std::endl;

}