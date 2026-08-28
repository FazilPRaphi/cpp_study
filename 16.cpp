#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no";
    cin>>n;
    int original=n;
    int sum=0;
    while(n!=0){

        int rem=n%10;
        sum+=rem*rem*rem;
        n=n/10;


    }
    if(sum==original){
        cout<<"the no is armstrong";
    }
    else{
        cout<<"the number is not armstrong";

    }
    return 0;
}