#include<iostream>
using namespace std;
int main(){
    int n=10829;int sum=0;
    while(n>0){
        int rem;
        int i=0;
        rem=n%10;
        sum+=rem;
        n/=10;

        
    }
    cout<<sum<<endl;
}