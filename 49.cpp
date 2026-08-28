#include<iostream>
using namespace std;
void oddoreven(int a){
    if(a%2==0){
        cout<<"Even";

    }
    else{
        cout<<"odd";
    }
}
int main(){
    cout<<"Enter the number\n";
    int n;
    cin>>n;
    oddoreven(n);
}