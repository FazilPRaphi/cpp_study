#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={1,5,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+5,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}