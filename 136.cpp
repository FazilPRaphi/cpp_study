#include<iostream>
#include<string>
using namespace std;
void f(int n,string ans,int lp){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    if(lp!=1){
        f(n-1,ans+'0',0);
        f(n-1,ans+'1',1);
    }else{
        f(n-1,ans+'0',0);
    }
}
int main(){
   
    string ans="";
    
    f(3,ans,0);
}