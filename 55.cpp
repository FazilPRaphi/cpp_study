#include<iostream>
using namespace std;
int quad(int a,int b){
    return a*a + b*b + 2*a*b;
}
int main(){
    int a,b;
    cout<<"Enter the number : ";
    cin>>a>>b;
    int x=quad(a,b);
    cout<<x;
}