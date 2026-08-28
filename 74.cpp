#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;
    while(start<=end){
       int temp;
       temp=arr[start];
       arr[start]=arr[end];
         arr[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}