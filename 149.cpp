#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void print()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "The list is empty" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data;
            if (temp->next != NULL)
                cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};


Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}
Node *SplitAtMid(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {

        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (prev != NULL)
    {
        prev->next = NULL;
    }
    return slow;
}


Node *zigzag(Node *head)
{
    Node *righthead = SplitAtMid(head);
    Node *rightHeadRev = reverse(righthead);

    Node *left = head;
    Node *right = rightHeadRev;
    Node *tail = right;
    while (left != NULL && right != NULL)
    {
        Node *nextleft = left->next;
        Node *nextright = right->next;

        left->next = right;
        right->next = nextleft;

        tail = right;
        left = nextleft;
        right = nextright;
    }
    if (right != NULL)
    {
        tail->next = right;
    }
    return head;
}

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);

    ll.print();
 
    ll.head = zigzag(ll.head);
    ll.print();
    return 0;
}
