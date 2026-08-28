#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[7]={6,3,7,1,3,9};
    int n=sizeof(arr)/sizeof(int);
    sort(arr,arr+7);
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }

}