#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int key=3;
    for(int i=0;i<5;i++){
        if(key==arr[i]){
            cout<<"Element present at this position"<<arr[i]<<" "<<i;
            break;
        }
    }
}
