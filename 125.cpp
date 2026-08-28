#include<iostream>
using namespace std;
int fact(int x){
    if(x==0 || x==1){
        return 1;

    }
    else{
        return x*fact(x-1);
    }
}
int main(){
    int x=4;
    int y=fact(x);
    cout<<y;


}