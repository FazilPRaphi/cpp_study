#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
        int key;
        cout<<"Enter the key : ";
        cin>>key;
        int low=0;
        int high=5-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(key==arr[mid]){
                cout<<"Element has been found at position"<<mid+1;
                break;
            }
            else if(key<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
    }
