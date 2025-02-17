#include <iostream>
using namespace std;

struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};

void Display(Array arr){
    for(int i=0;i<arr.length;i++){
        cout << arr.A[i] << ' ';
    }
    cout << endl;
}

void Append(Array &arr, int n){
    if(arr.length < arr.size){
        arr.A[arr.length++] = n;
    }
}

void Insert(Array &arr,int n, int i){
    int j;
    if(i >= 0 && i <= arr.length){
        for(j = arr.length;j>i;j--){
            arr.A[j] = arr.A[j-1];
        }
        arr.A[j] = n;
        arr.length++;
    }   
}

int Delete(Array &arr,int i){
    int x = arr.A[i];
    if(i>= 0 &&i < arr.length){
        for(int j=i;j<arr.length;j++){
            arr.A[j] = arr.A[j+1];
        }
        arr.A[arr.length-1] = 0;
        arr.length--;
        return x;
    }
    return x;
}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int LinearSearch(Array &arr, int n){
    for(int i=0;i<arr.length;i++){
        if(arr.A[i] == n){
            // swap(arr.A[i],arr.A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(Array arr, int n){
    int l = 0;
    int h = arr.length-1;

    while (l <= h)
    {
        int mid = h-(h-l)/2;
        if(arr.A[mid] < n){
            l = mid+1;
        }else if(arr.A[mid] > n){
            h = mid-1;
        }else{
            return mid;
        }
    }

    return -1;
    
}

int main(){
    struct Array arr = {{2,7,3,8,2},20,5};
    // cout << "Enter the size of array: ";
    // cin >> arr.size;
    // arr.A = new int[arr.size];
    // arr.length = 0;
    // // arr.A[1] = 44;
    // // cout << arr.A[1];
    // int n,i;
    // cout << "Enter the number of numbers: ";
    // cin >> n;
    // cout << "Enter the numbers: " << endl;
    // for(i=0;i<n;i++){
    //     cin >> arr.A[i];
    // }
    // arr.length = n; 
        
    Display(arr);
    Append(arr,111);
    Display(arr);
    Insert(arr,99,3);
    Display(arr);
    cout << Delete(arr,3) << endl;
    Display(arr);
    cout << LinearSearch(arr,1111) << endl;
    Display(arr);
    cout << BinarySearch(arr, 1111) << endl;
    Display(arr);

}