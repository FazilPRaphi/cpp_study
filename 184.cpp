#include<iostream>
#include<map>
#include<string>
using namespace std;
 int main(){
    map<int,string> m;
    m[1]="jabulani";
    m[2]="harri";
    m[3]="rahul";
    cout<<m[1]<<endl;
    cout<<m[2]<<endl;
    cout<<m[3]<<endl;
    for (auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
 }