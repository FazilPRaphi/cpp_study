#include<iostream>
using namespace std;
int main(){
    char arr[6]="ApPle";
    for(int i=0;i<6;i++){
        if(arr[i]<97){
            cout<<arr[i];
        }
        else{
            cout<<(char)(arr[i]-32);
        }
    }
}