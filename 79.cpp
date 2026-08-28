#include<iostream>
#include<climits>
using namespace std;
void maxsubarr(int *arr,int n){
    int max=INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
            sum+=arr[end];
            if(max<sum){
                max=sum;
            }
        }
        
    }
    cout<<max;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarr(arr,n);
}