#include<iostream>
using namespace std;
int pairinfriends(int n){
    if(n==1 || n==2){
        return n;
    }
    return pairinfriends(n - 1) + (n - 1) * pairinfriends(n - 2);
}
int main(){
    int n;
    cout<<"Enter the number of friends";
    cin>>n;
    cout<<pairinfriends(n);
}