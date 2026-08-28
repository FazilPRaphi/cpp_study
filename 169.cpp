#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int> &q){
    queue<int> first;
    int n= q.size();
    for(int i=0;i<n/2;i++){
        first.push(q.front());
        q.pop();
    }
    while(!first.empty()){
        q.push(first.front());
        first.pop();
        q.push(q.front());
        q.pop();
    }

}
int main(){
    queue<int> q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }
    interleave(q);

    for(int i=1;i<=10;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}