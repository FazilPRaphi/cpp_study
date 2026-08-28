#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no : ";
    cin >>n;
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        
        for(int j=2;j<i;j++){
            if(i==2){
                continue;
            }
            if(i%j==0){
                isPrime=false;
                break;
            }
            
        }
        if(isPrime){
            cout<<i<< " is Prime\n";
        }
        else{
            cout<<i<<" is not Prime\n";
        }
    }
}