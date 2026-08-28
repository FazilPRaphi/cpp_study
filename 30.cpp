#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no";
    cin>>n;
    int sum=0;
    int org=n;
    while(n!=0){
        int rem= n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(org==sum){
        cout<<"Armstrong";

    }
    else{
        cout<<"Not armstrong";
    }
}