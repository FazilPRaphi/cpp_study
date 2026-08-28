#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool isPrime =true;
    if(n<=1){
        cout<<"Not Prime";
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}