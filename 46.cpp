#include<iostream>
using namespace std;
int sum(int a, int b);
int main(){
    int x= sum(3,4);
    cout<<x;
}
int sum(int a,int b){
    return a+b;
}