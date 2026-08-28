#include<iostream>
using namespace std;
int main(){
    float principal,rate,time;
    cout<<"Enter the needed values"<<endl;
    cin>>principal>>rate>>time;
    cout<<"output"<< (principal*rate*time)/100<<endl;
    return 0;
}