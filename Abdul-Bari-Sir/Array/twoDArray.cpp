#include <iostream>

using namespace std;


int main(){
    int arr[3][4] = {{1,2,3,4},{2,4,6,8},{3,5,7,9}};


    int *arr1[3];

    arr1[0] = new int[4];
    arr1[1] = new int[4];
    arr1[2] = new int[4];

    int **arr2;
    arr2 = new int*[3];
    arr2[0] = new int[4];
    arr2[1] = new int[4];
    arr2[2] = new int[4];
}