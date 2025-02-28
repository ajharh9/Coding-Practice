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

int BinarySearchREC(Array arr, int n){
    static int l = 0;
    static int h = arr.length;
    int mid = (l+h)/2;
    if(l <= h){
        if(arr.A[mid] == n){
            return mid;
        }else if(n < arr.A[mid]){
            h = mid -1;
            return BinarySearchREC(arr, n);
        }else{
            l = mid + 1;
            return BinarySearchREC(arr, n);
        }
    }
    return -1;
}

void Reverse(Array &arr){
    for(int i=0,j=arr.length-1;j>=i;i++,j--){
        swap(arr.A[i], arr.A[j]);
    }
}

void Insert(Array &arr, int n){
    if(arr.length != arr.size){
        int i = arr.length;
        while(i >= 0 && arr.A[i-1] > n){
            arr.A[i] = arr.A[i-1];
            i--;
        }
        arr.A[i] =n;
        arr.length++;

    }
}

bool isSorted(Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i] > arr.A[i+1]) return false;
    }
    return true;
}

void Rearrange(Array &arr){
    int i=0;
    int j=arr.length;

    while(i<=j){
        while(arr.A[i]<0) i++;
        while(arr.A[j]>=0) j--;
        if(i<j)swap(arr.A[i],arr.A[j]);
    }
}

Array * Merge(Array * arr1, Array * arr2){
    int i=0,j=0,k=0;
    Array *res = new Array();

    while(i < arr1->length && j < arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            res->A[k++] = arr1->A[i++];
        }else{
            res->A[k++] = arr2->A[j++];
        }
    }

    for(;i<arr1->length;i++) res->A[k++] = arr1->A[i++]; 
    for(;j<arr2->length;j++) res->A[k++] = arr2->A[j++]; 
    res->length = arr1->length+ arr2->length;
    res->size = 20;
    return res;
}

int main(){
    struct Array arr = {{1,2,3,4,4},20,5};
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
    cout << BinarySearch(arr, 3) << endl;
    Display(arr);
    cout << BinarySearchREC(arr, 3) << endl;
    Display(arr);
    Insert(arr,2);
    Display(arr);
    cout << isSorted(arr) << endl;
    Array arr1 = {{1,-2,43,-14,-4, 5 , 26, -9},20,8};
    Display(arr1);
    Rearrange(arr1);
    Display(arr1);
    Array arr2 = {{2,5,7,8,9},20,5};
    Array arr3 = {{1,3,4,6,10},20,5};
    struct Array * mergedArr = Merge(&arr2, &arr3);
    Display(*mergedArr);
}