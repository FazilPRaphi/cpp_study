#include<iostream>
using namespace std;
int pow(int x,int n)
{
    if(n==0){
        return 1;
    }
    x^n/2;

    int halfpow=pow( x, n/2);
    int fullpow = halfpow*halfpow;
    
    if(n%2!=0){
        return x*fullpow;
    }
    else{
        return fullpow;
    }
}
int main(){
    int x=5;
    int n=4;
   cout<< pow(5,4);
}