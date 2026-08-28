#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class Stack{

    vector <T> vec;
    public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isEmpty()){
            cout<<"The stack is empty";
            return;
        }
        vec.pop_back();
    }
    T top(){
        // if (isEmpty())
        // {
        //     cout << "The stack is empty";
        //     return -1;
        // }
        int lastIdex= vec.size()-1;
         return vec[lastIdex];
    }
    bool isEmpty(){
        return vec.size()==0;
    }

};

int main(){
    Stack <string> s;
    s.push("learn");
    s.push("to");
    s.push("dream");
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}