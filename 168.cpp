#include<iostream>
#include<queue>
using namespace std;
void FirstNonRepeat(string str){
   queue <char> q;
   int feq[26]={0};

   for(int i=0;i<str.size();i++){
    char ch= str[i];
    q.push(ch);
    feq[ch-'a']++;
    while (!q.empty() && feq[q.front()-'a']>1)
    {
       q.pop();

    }
    if(q.empty()){
        cout<<-1<<" ";
    }else{
        cout<<q.front()<<" ";
    }
    
   }

}
int main(){
string str= "aabccxb";

FirstNonRepeat(str);
    return 0;
}