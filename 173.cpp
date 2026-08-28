#include<iostream>
#include<deque>
using namespace std;
class Queue{
    deque<int> q;
    public:
    void push(int val){
        q.push_back(val);
    }
    void pop(){
        q.pop_front();
    }
    bool empty(){
        return q.empty();
    }
    int front(){
      return   q.front();
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}