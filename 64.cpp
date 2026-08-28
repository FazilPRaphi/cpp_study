#include<iostream>
using namespace std;
void changeA(int &a){
    a=15;
    cout<<a<<endl;
}
int main(){
    int a=4;
    changeA(a);
    cout << a;
}