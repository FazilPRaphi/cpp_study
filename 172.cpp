#include<iostream>
#include<deque>
using namespace std;
 int main(){
    deque <int> q;
    q.push_back(0);
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);
    q.push_back(4);
    q.push_back(5);
    q.push_back(6);
    q.pop_front();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
    }
    return 0;
 }