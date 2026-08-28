#include<iostream>
using namespace std;
int main(){
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]<arr[j]){
            swap(arr[min],arr[j]);
            
        }

    }
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}