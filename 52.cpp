#include<iostream>
using namespace std;
int ncr(int n){
if(n<=1){
    return 1;

}   
else{
    return n*ncr(n-1);
} 
    }

int main(){
    int n,r;
    cout<<"ENter the n value";
    cin>>n;
    cout<<"Enter the r value";
    cin>>r;
    cout<< (ncr(n)/(ncr(r)*(ncr(n-r))));
    
}