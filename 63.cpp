#include<iostream>
using namespace std;
void prin(int *ptr){
    *ptr=10;
    cout<<*ptr<<endl;
}

    int main(){
        int a=2;
        prin(&a);
        cout<<a;
    }
