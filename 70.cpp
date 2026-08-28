#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,9,2};
    int min=arr[0];
    for(int i=1;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min;
}