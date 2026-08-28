#include<iostream>
using namespace std;
void maxsubarray(int *arr,int n){
    int max=0;
    for(int start=0;start<=n;start++){
        for(int end=start;end<=n;end++){
            int sum=0;
            for(int i=start;i<=end;i++){
                sum+=arr[i];
                if(max<sum){
                   max=sum;
                }
            }
            
        }
        
    }
    cout<<max;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    maxsubarray(arr,n);
}