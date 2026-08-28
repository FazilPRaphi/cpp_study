#include<iostream>
#include<climits>
using namespace std;
void bs(int *arr,int n){
    int mx[6];
     mx[0]=INT_MAX;
     for(int i=1;i<n;i++){
        mx[i]=min(mx[i-1],arr[i-1]);
     }
     for(int i=0;i<n;i++){
        cout<<mx[i]<<" ";
     }
     cout<<endl;
     int prof[6];
     int maxprof=0;
     for(int i=0;i<n;i++){
        prof[i]=arr[i]-mx[i];
        maxprof=max(maxprof,prof[i]);
     }
     cout<<maxprof;
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(n);
    bs(arr,n);
}