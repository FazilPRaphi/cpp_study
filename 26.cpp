#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a  number :";
    bool isPrime =false;
    cin>>n;
    if(n<=1){
        isPrime=false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            
            isPrime=false;
            break;
        }
        
        
    }
    if(isPrime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}