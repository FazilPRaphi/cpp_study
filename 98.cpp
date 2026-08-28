#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n=4;
    cout<<"Enter the key";
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(key==arr[i][j]){
                cout<<"Element found at "<<i<<","<<j;
                break;
            }
            
        }
    }

}