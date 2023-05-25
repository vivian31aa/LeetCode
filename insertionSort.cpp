#include <iostream>

using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[6] = {8,5,3,4,1,2};
    int arr_length=sizeof(arr)/sizeof(int);
    insertionSort(arr,arr_length);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}