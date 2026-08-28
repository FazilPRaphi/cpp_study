#include<iostream>
using namespace std;
int main(){
    char a[]="jameson";
    int n=sizeof(a)/sizeof(char);
   int start=0;
   int end=n-2;
   while(start<=end){
    swap(a[start],a[end]);
    start++;
    end--;
   }
   cout<<a;
}