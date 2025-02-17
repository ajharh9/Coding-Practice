#include <iostream>

using namespace std;

int main(){
    int *arr = new int[5];
    int val =1;
    for(int i =0;i<5;i++) arr[i] = val++;
    for(int i =0;i<5;i++) cout << arr[i] << endl;

    int *temp = new int[10];
    cout << "-------------------" << endl;
    for(int i =0;i<5;i++) temp[i] = arr[i];
    for(int i =0;i<10;i++) cout << temp[i] << endl;

    delete [] arr;
    arr = temp;
    temp = nullptr;
    return 0;

}