#include<iostream>
using namespace std;
int main(){
    char a[8]="racer";
    int n=sizeof(a)/sizeof(char);
    int start=0;
    int end=n-2;
    bool pal=true;
    while(start<=end){

        if(a[start]==a[end]){
            pal=true;

        }
        else{
            pal=false;
            break;
        }
        start++;
        end--;
    }
    if(pal){
        cout<<"Palindrome";

    }
    else{
        cout<<"Not Palindrome";
    }
}