#include<iostream>
using  namespace std;
int main(){
    while(1){
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<n<<" ";
    }
}