#include<iostream>
using namespace std;
 int main(){
    int arr[]={2,7,11,15};
    int n=sizeof(arr)/sizeof(int);
    int start=0;
    int end=n-1;
    int target=9;
    for(int i=0;i<n;i++){
        for(int j=start;j<end;j++){
            if(target==arr[i]+arr[j]){
                cout<<"element has been found at"<<i<<j;
                break;
            }
        }
        cout<<endl;
    }
 }