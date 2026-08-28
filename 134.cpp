#include<iostream>
#include<string>
using namespace std;
void removeDuplicates(string str,string ans,int i, bool map[]){
    if(i==str.size()){
       cout<<ans;

    }


    char ch =str[i];
    int index= (int) ch-'a';
    if(map[index]){
        removeDuplicates(str,ans,i+1,map);

    }
    else{
        map[index]=true;
        removeDuplicates(str,ans+ch,i+1,map);
    }
}
int main(){

    string str="appnnacollege";
    string ans="";
    bool map[26]={false};
    removeDuplicates(str,ans,0,map);

}