#include<iostream>
using namespace std;
int main(){
    int operation;
    float a,b;
    cout<<"Choose the operation \n "<<"1.addition \t 2.subtraction \t 3.multiplication \t 4.Division \n";
    {
    cout<<"Enter the nos on which operation need to be done :";
    cin>>a>>b;
    cout<<"choose the operation";
    cin>>operation;
    switch(operation){
        case 1 : cout<<a+b;
            return 0;
        case 2 : cout<<a-b;
            return 0;
        case 3 : cout<<a*b;
            return 0;
        case 4 : cout<<a/b;
            return 0;
    }

    }
}