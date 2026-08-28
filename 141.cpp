#include<iostream>
#include<string>
using namespace std;
void subse1(string str,string subset){
    if(str.size()==0){
        cout<<subset<<" ";
        return ;
    }
    char ch=str[0];
    subse1(str.substr(1,str.size()-1),subset+ch);
    subse1(str.substr(1,str.size()-1),subset);
}
int main(){
string str="abc";
string subset=" ";
subse1(str,subset);

}