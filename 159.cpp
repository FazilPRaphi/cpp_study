#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void nextGreater(vector<int> nos,vector<int> ans){
    int idx= ans.size()-1;
    stack <int> s;
    ans[idx]=-1;
    s.push(nos[idx]);
    for(idx=idx-1;idx>=0;idx--){
        int curr = nos[idx];
        while(!s.empty() && curr>=s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[idx]=-1;
        }else{
            ans[idx]=s.top();
        }
        s.push(curr);
       
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector <int> nos={6,8,0,1,3};
     vector <int> ans={0,0,0,0,0,0};
     nextGreater(nos,ans);
    return 0;
}