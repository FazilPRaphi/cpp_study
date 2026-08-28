#include<iostream>
using namespace std;
int main(){
    int income;
    cout<<"Enter the income :";
    cin>>income;
    int total;
    int tax;
    if(income <500000){
        total=income;
        cout<<"Tax is of 0%";
    }
    else if(income>=500000 && income<1000000){
        tax =income*(.2);
        total=income +tax;
        cout<<"total taxation :"<<tax;
    }
    else if(income>=1000000){
        tax=income*(.3);
        total=income +tax;
        cout<<"total taxation :"<<tax;

    }
    return 0;
}