#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void pushAtBottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int temp = s.top();
    s.pop();

    pushAtBottom(s, x);

    s.push(temp);
}


void reverse(stack<int> &s){
    if(s.empty()){
        return ;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,temp);
}
void print(stack <int> &s)
{
    while(!s.empty()){

        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(7);
    s.push(1);
    s.push(2);
    s.push(4);
    
    reverse(s);
    print(s);
    print(s);

    return 0;
}