#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int arr2[n];
    int j=0;
    for(int i=n-1;i>=0;i--){
       arr2[j]= arr[i];
       j++;
        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}