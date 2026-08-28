#include<iostream>
#include<climits>
using namespace std;
void kadane(int *arr,int n){
    int maxsum=INT32_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    kadane(arr,n);
    }
