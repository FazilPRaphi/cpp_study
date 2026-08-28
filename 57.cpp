#include<iostream>
using namespace std;
char nextChar(char a){
    if( a== 'z'){
        return 'a';
    }
    else{
        return (char)++a;
    }
}
int main(){
    char a;
    cout<<"Enter the alphabet : ";
    cin>>a;
    char x= nextChar(a);
    cout<<x;
}