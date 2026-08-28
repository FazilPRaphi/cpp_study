#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque <int> q;
    q.push_front(1);
    q.push_front(2);
    q.push_back(3);
    q.push_back(4);
    q.pop_front();
    q.pop_back();
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop_front();
    }
    return 0;
}
