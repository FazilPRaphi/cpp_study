#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseq( queue <int> &q){
    stack<int> s;
    while(!q.empty()){
    s.push(q.front());
    q.pop();
   
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main(){
    queue  <int> q;
    int n=0;
    while(n!=10){
        q.push(n);
        n++;
    }
    reverseq(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}