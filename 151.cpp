#include<iostream>
#include<vector>
using namespace std;

class Stack{

    vector<int> vec;
    public: 
    void push(int val){
        vec.push_back(val);
    }


    void pop(){
        if(isEmpty()){
            cout<<"The stack is empty\n";
            return;
        }

        vec.pop_back();
    }

    int top(){
        if (isEmpty())
        {
            cout << "The stack is empty\n";
            return -1;
        }
       int lastIdx= vec.size()-1;
       return vec[lastIdx];
    }

    bool isEmpty(){
        
            return vec.size()==0;
        

    }
    void print(){
        for(int i=0;i<=vec.size()-1;i++){
            cout<< vec[i]<<" ";
        }
        cout<<endl;
    }




};
 int main(){
    Stack s;
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.pop();
    s.print();
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
 }
