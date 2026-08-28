#include<iostream>
using namespace std;
void large(int a,int b,int c){
    if(a>b && a>c) {
        cout<<" largest is "<<a;
    }
    if(b>a && b>c) {
        cout<<" largest is "<<b;
    }
    if(c>b && b<c) {
        cout<<" largest is "<<c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the three Numbers : ";
    cin>>a>>b>>c;
    large(a,b,c);
}