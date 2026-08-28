#include<iostream>
using namespace std;
int fact(int n){
    int fac;
    if (n<=1){
        return 1;
    }
    else{
         return fac = n *  fact(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    int x=fact(n);
    cout<<x<<endl;
}