#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                swap(arr[min],arr[j]);
                
                
            }

        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}