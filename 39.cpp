#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=1;j++){
            cout<<" * ";
        }
        for(int j=0;j<=n;j++){
            if(i==0 || i==n){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
            
        }
        for(int j=1;j<=1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}