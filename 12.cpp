#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the nos ";
    cin>>a>>b;
    int largest = (a>b) ? a : b;
    cout<<"the largest element is"<< largest;
}