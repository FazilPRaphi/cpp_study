#include <iostream>
#include <deque>
using namespace std;
class Stack
{
    deque<int> q;

public:
    void push(int val)
    {
        q.push_back(val);
    }
    void pop()
    {
        q.pop_back();
    }
    bool empty()
    {
        return q.empty();
    }
    int top()
    {
        return q.back();
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}