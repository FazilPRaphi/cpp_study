#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data= val;
        left=NULL;
        right=NULL;
    }
};
Node* buildbst(int arr[],int start,int end){
    if(start>end){
        return NULL;
    }
int mid= start+ (end-start)/2;
Node* curr= new Node(arr[mid]);
curr->left =buildbst(arr,start,mid-1);
curr->right= buildbst(arr,mid+1,end);
}

void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node *bstfromsortedvec(vector<int> &arr, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }
    int mid = start + (end - start) / 2;
    Node *curr = new Node(arr[mid]);
    curr->left = bstfromsortedvec(arr, start, mid - 1);
    curr->right = bstfromsortedvec(arr, mid + 1, end);

    return curr;
}
void getinorder(Node* root,vector<int> &nodes){
    if(root==NULL){
        return;
    }
    getinorder(root->left, nodes);
    nodes.push_back(root->data);
    getinorder(root->right, nodes);
}

Node * balanceBST(Node* root){
    if(root==NULL){
        return NULL;
    }
    vector<int> nodes;
   getinorder(root,nodes);
  return  bstfromsortedvec(nodes,0,nodes.size()-1);
  

}
int main(){
    int arr[]= {3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    Node * root =buildbst(arr,0,n-1);
    preorder(root);
    cout<<endl;
    root=balanceBST(root);
    preorder(root);
    return 0;
}