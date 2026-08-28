#include<iostream>
using namespace std;
int prime(int n){
    bool isPrime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
        }
       
    }
    if(isPrime==true){
        cout<<"Prime";
    }
    else{
        cout<<"not Prime";
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    prime(n);
}