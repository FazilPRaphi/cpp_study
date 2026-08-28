#include<iostream>
#include<deque>
using namespace std;
class Stack{
    deque<int> q;
public:
void push(int val){
    q.push_front(val);

}
void pop(){
    q.pop_front();

}
bool empty(){
    return q.empty();
}
int top(){
    return q.front();
}
};
 int main(){
Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.pop();
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
 }