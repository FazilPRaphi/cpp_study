#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Node{
    public:
    T data;
    Node * next;
    Node(T val){
        data=val;
        next=NULL;
    }
};
template <class T>
class Stack{
    Node<T>* head;
    public:
 
        Stack(){
            head=NULL;
        }

    void push_front(T val){
        Node<T>* newNode = new Node<T>(val);
        if(head!=NULL){
            newNode->next=head;
            head=newNode;
        }
        else{
        head=newNode;
        }
    }

    void pop_front(){
        Node<T>* temp =head;
        head=head->next;
        if(head==NULL){
            cout<<"List is empty";
        }else{
                temp->next=NULL;
                delete temp;
        }
    }
    T top(){
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
};

int main(){

    Stack<int> s;
    s.push_front(3);
    s.push_front(2);
    s.push_front(1);

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop_front();
    }

    return 0;
}