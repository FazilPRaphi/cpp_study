#include<iostream>
#include<climits>

using namespace std;
void sub(int *arr,int n){
    int leftmax[200];
     leftmax[0]=arr[0];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],arr[i-1]);
        cout<<leftmax[i]<<" ";
    }
    cout<<endl;
    int rightmax[200];
     rightmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
        cout<<rightmax[i]<<" ";
    }
    int trapped=0;
    for(int i=0;i<n;i++){
        int curr=min(leftmax[i],rightmax[i]);
        curr=curr-arr[i];
        if(curr>0){
            trapped+=curr;

        }

    }
    cout<<"water trapped is equal to "<<trapped;
}
int main(){
    int arr[7]={4,2,0,6,3,2,5};
    int n=sizeof(arr)/sizeof(int);
    sub(arr,n);
}