#include<iostream>
using namespace std;
int main(){
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        int curr= arr[i];
        int prev= i-1;
        for(int j=i;j<n;j++){
            while(prev>=0 && curr>arr[prev]){
                
                swap(arr[prev+1],arr[prev]);

                prev--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}