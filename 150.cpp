#include<iostream>
using namespace std;
class Node {
    public: 
    int data;
    Node * next;
    Node * prev;


    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;

    }
};

class Dbll{

    public:
    Node* head;
    Node * tail;

    Dbll(){
        head=NULL;
        tail=NULL;

    }

    void pushfront(int val ){
        Node * newNode =new Node(val);

        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void printList(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<" NULL"<<endl;
    }
    void popfront(){
        Node * temp = head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;

        }
        temp->next=NULL;
        delete temp;
    }
};



 int main(){
    
    Dbll ll;
    ll.pushfront(1);
    ll.pushfront(2);
    ll.pushfront(3);
    ll.pushfront(4);
    ll.pushfront(5);
    ll.pushfront(6);
    ll.pushfront(7);
    ll.pushfront(8);
    ll.popfront();
    ll.printList();
    return 0;
 }