#include<iostream>
using namespace std;
void printArr(int * arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int partition(int *arr,int si,int ei){
    int i=si-1;
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            swap(arr[++i],arr[j]);

        }
    }
    swap(arr[++i],arr[ei]);
    return i;
}
void quicksort(int *arr, int si,int ei){
    if(si>=ei){
        return;
    }
   int  pivotIndex=partition(arr,si,ei);
    quicksort(arr,pivotIndex+1,ei);
    quicksort(arr,si,pivotIndex-1);
}
int main(){
    int arr[5]={4,1,8,3,5};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,4);
    printArr(arr,n);
}