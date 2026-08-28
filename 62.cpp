#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<&ptr <<" = "<<pptr;
}