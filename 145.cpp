#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next; 

    Node(int val){
        data= val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;

    public :
    List(){
        head=NULL;
        tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next =head;
            head=newNode;
        }
    }

    void push_back(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
          
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }


    void insert (int val,int pos){
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"position is invalid"<<endl;
                return;
            }
            temp =temp->next;
        }
        newNode ->next =temp->next;
        temp->next=newNode;


    }

    void pop_front(){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void print(){
        Node* temp = head;
        if(head==NULL){
            cout<<"The list is empty"<<endl;
            return;
        }
        while(temp!=NULL){
            cout<<temp->data;
            if(temp->next!=NULL) cout<<" -> ";
            temp = temp->next;
        }
        cout<<endl;
    }
void pop_back(){
    Node * temp=head;
    while (temp->next->next != NULL)
    {
        cout << temp->data << " --- ";
        temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
}
int search(int key){
    Node* temp =head;
    int count=0;
    while(temp!=NULL){
    
    if(temp->data==key){
        return count;
    }
   
        temp=temp->next;
        count++;
    
}
return -1;
}
int helper (Node* temp,int key){
    if(temp==NULL){
        return -1;
    }
    if (temp->data==key){
        return 0;
    }
    int idx =helper(temp->next,key);
    if(idx==-1){
        return 0;

    }
    return idx+1;
}
int searchrecursive(int key){
       
    return helper(head,key);
}

void reverse(){
    Node * curr = head;
    Node * prev = NULL;
    while(curr!=NULL){
        Node *next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

int size(){
    int sz=0;
    Node * temp =head;
    while(temp!=NULL){
        temp=temp->next;
        sz++;
    }
    return sz;
}
void removeNth(int key){
    Node *prev =head;
    for(int i=0;i<(size()-key);i++){
        prev=prev->next;
    }
    Node* todelete  = prev->next;
    cout<<todelete->data;

    prev->next=prev->next->next;
}
};
int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.insert(2,2);

    ll.print();
    ll.pop_front();
    cout<<"search(2): "<<ll.search(2)<<endl;
    cout<<ll.searchrecursive(4)<<"\n";
    ll.reverse();
    ll.print();
    ll.removeNth(3);
    return 0;
}