#include<iostream>
using namespace std;
int main(){
    bool isEven=false;
    int n=5;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            isEven=true;
        }
        else{
            isEven=false;
        }
        for(int j=1;j<=i+1;j++){
            cout<<isEven;
        }
        cout<<endl;
    }
}