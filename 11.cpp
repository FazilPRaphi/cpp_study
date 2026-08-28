#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three nos";
    cin>>a>>b>>c;
    if(a>b && a>c){
       cout<<" a is the greatest element";
   
}
if(b>a && b>c){
    cout << " b is the greatest element";
}
if(c>a && c>b){
    cout << " c is the greatest element";
}
}