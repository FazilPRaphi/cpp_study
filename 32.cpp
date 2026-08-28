#include<iostream>
using namespace std;
int fib(int n)
{
    int fi;
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        fi=fib(n-1)+fib(n-2);
        return fi;
    }

}
    int main(){
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    for(int i=0;i<=n;i++){
    int x= fib(i);
    cout<<x<<" ";
    }
}