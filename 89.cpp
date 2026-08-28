#include<iostream>
using namespace std;
void bubble(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n=sizeof(arr)/sizeof(int);
    bubble(arr,n);
}