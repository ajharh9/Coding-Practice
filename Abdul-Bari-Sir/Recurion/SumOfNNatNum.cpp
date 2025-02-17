#include <iostream>

using namespace std;

int sumOfN(int n){
    if(n==0) return 0;
    return sumOfN(n-1)+n;
}

int IsumOfN(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s = s+i;
    }
    return s;
}
int main(){
    int n = 10;

    printf("%d\n",sumOfN(n));
    printf("%d",IsumOfN(n));
    
}