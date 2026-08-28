#include<iostream>
using namespace std;
void palin(int n){
    int sum=0;
    int org=n;
    while(n!=0){
       int rem=n%10;
       sum=sum*10+rem;
       n/=10;
    }
    if(org==sum){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    palin(n);
}