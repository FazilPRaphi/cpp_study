#include<iostream>
using namespace std;
void prime(int n){
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
            }
        }
        if(isPrime==true){
            cout<<i <<" is Prime \n";
        }
        else{
            cout<<i<< " is not Prime \n";
        }
    }
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    prime(a);
}