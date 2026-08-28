#include<iostream>
using namespace std;
int main(){
    int a=15;
    int *ptr=&a;
    cout<<&a<<" = "<<ptr<<endl;
    float pi=3.14;
    float *ptr2=&pi;
    cout<<&pi<<" = "<<ptr2<<endl;
}