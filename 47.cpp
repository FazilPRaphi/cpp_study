#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    int dif=a-b;
    return dif;
}
int mul(int a,int b=5){
    return a*b;
}
int main(){
    int s=sum(2,3);
    cout<<s<<endl;
    int x=diff(8,1);
    cout << x << endl;
    int y= mul(6);
    cout << y << endl;
}