#include<iostream>
using namespace std;
int bintodec(int a){
    int rem;
    int sum=0;
    int i=1;
    while(a>0){
        rem=a%10;
        sum+=rem*i;
        i=i*2;
        a/=10;
    }
    return sum;
}
int main(){
    int a;
    cout<<"Enter the binary number : ";
    cin>>a;
    int x= bintodec(a);
    cout<<x;
}