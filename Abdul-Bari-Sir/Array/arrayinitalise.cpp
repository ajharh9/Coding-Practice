#include <iostream>

using namespace std;

void print(int arr[]){
    for(int i=0;i<5;i++) cout <<  arr[i] << ' ';
    cout << endl;
}

int main(){
    int arr[5];
    print(arr);

    int arr1[5]={1,5,6,2,7};
    print(arr1);
    cout << arr1[3] << endl;
    cout << 3[arr1] << endl;
    cout << *(arr1+3) << endl;

    int arr2[5] = {1,6};
    print(arr2);

    int arr3[5]={0};
    print(arr3);

    int arr4[]={1,4,2,6,7};
    print(arr4);
}