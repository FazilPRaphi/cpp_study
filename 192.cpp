#include<iostream>
#include<vector>
using namespace std;
class Node{
public:

    int data;
    Node* left;
    Node* right;

    Node (int val){
        this->data= val;
        left=right=NULL;

    }



};
class Info{
    public:
    bool isBST;
    int min;
    int max;
    int sz;
    Info(bool isBST,int min,int max,int sz){
        this->isBST= isBST;
        this->min= min;
        this->max= max;
        this->sz=sz;
    }

};
static int maxsz;
Info* largestBST(Node * root){
    if(root==NULL){
        return new Info(true, INT32_MAX, INT32_MIN, 0);
    }
    Info* leftinfo= largestBST(root->left);
    Info* rightinfo= largestBST(root->right);

    
    
    int currmin=min(root->data,min(leftinfo->min,rightinfo->min));
    int currmax=max(root->data,max(leftinfo->max,rightinfo->max));
  
    int currsz= leftinfo->sz +rightinfo->sz+1;

    if(leftinfo->isBST && rightinfo->isBST
        && root->data>leftinfo->max
            && root->data<rightinfo->min){
                maxsz= max(currsz,maxsz);
                return new Info(true, currmin,currmax,currsz);
            }

        return new Info(false, currmin, currmax, currsz);
}
 int main(){
    Node * root =new Node(50);
    root->left=new Node(30);
    root->left->left=new Node(5);
    root->left->right=new Node(20);

    root->right= new Node(60);
    root->right->left =new Node (45);
    root->right->right=new Node(70);

    root->right->right->left=new Node(65);
    root->right->right->right=new Node(80);

    largestBST(root);
    cout<<maxsz<<" ";
        return 0;
 }