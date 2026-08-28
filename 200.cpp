#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Node
{
public:
    string key;
    int val;
    Node *next;

    Node(string key, int val)
    {
        this->val = val;
        this->key = key;
        next = NULL;
    }
};

class Hashtable
{
    int totsize;
    int currsize;
    Node **table;

    int hashfunction(string key)
    {
        int idx = 0;
        for (int i = 0; i < (int)key.size(); i++)
        {
            idx = (idx + (key[i] * key[i])) % totsize; // mod the running total, not just each term
        }
        return idx;
    }

public:
    Hashtable(int size = 5)
    {
        this->totsize = size;
        currsize = 0;
        table = new Node *[totsize];
        for (int i = 0; i < totsize; i++)
        {
            table[i] = NULL;
        }
    }

    // Prevent shallow copies of the raw pointer (or implement a deep copy if you need one)
    Hashtable(const Hashtable &) = delete;
    Hashtable &operator=(const Hashtable &) = delete;

    ~Hashtable()
    {
        for (int i = 0; i < totsize; i++)
        {
            Node *curr = table[i];
            while (curr != NULL)
            {
                Node *toDelete = curr;
                curr = curr->next;
                delete toDelete;
            }
        }
        delete[] table;
    }

    void insert(string key, int val)
    {
        int idx = hashfunction(key);
        Node *newNode = new Node(key, val);
        newNode->next = table[idx]; // fixed: was "head", which didn't exist
        table[idx] = newNode;
        currsize++;
    }

    bool search(string key, int &outVal)
    {
        int idx = hashfunction(key);
        Node *curr = table[idx];
        while (curr != NULL)
        {
            if (curr->key == key)
            {
                outVal = curr->val;
                return true;
            }
            curr = curr->next;
        }
        return false;
    }

    bool remove(string key)
    {
        int idx = hashfunction(key);
        Node *curr = table[idx];
        Node *prev = NULL;
        while (curr != NULL)
        {
            if (curr->key == key)
            {
                if (prev == NULL)
                    table[idx] = curr->next;
                else
                    prev->next = curr->next;
                delete curr;
                currsize--;
                return true;
            }
            prev = curr;
            curr = curr->next;
        }
        return false;
    }

    void display()
    {
        for (int i = 0; i < totsize; i++)
        {
            cout << i << ": ";
            Node *curr = table[i];
            while (curr != NULL)
            {
                cout << "(" << curr->key << ", " << curr->val << ") -> ";
                curr = curr->next;
            }
            cout << "NULL\n";
        }
    }
};

int main()
{
    Hashtable ht(10);
    ht.insert("apple", 1);
    ht.insert("banana", 2);
    ht.insert("cherry", 3);

    ht.display();

    int v;
    if (ht.search("banana", v))
        cout << "Found banana: " << v << "\n";
    else
        cout << "banana not found\n";

    ht.remove("banana");
    if (!ht.search("banana", v))
        cout << "banana removed successfully\n";

    return 0;
}