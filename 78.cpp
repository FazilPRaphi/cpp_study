#include<iostream>
#include<climits>
using namespace std;
void maxsub(int *arr,int n){
    int max=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
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
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxsub(arr,n);






}
