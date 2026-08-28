#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    };



};
Node* insert(Node* root,int val){
    if(root==NULL){
        root= new Node(val);
        return root;
    }
    if(val>root->data){
       root->right= insert(root->right,val);
    }
    else{
       root->left= insert(root->left,val);
    }
    return root;
}



Node* buildbst(int arr[],int n){
    Node* root=NULL;
    for(int i=0;i<n;i++){
     root =   insert(root,arr[i]);

    }
    return root;
}

void inorder(Node * root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    
}

bool search(Node * root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data >key){
        return  search(root->left,key);
    }else{
        return search(root->right, key);
    }
}
Node* getinOrder(Node * root){
    while(root->left!=NULL){
        root=root->left;
    }
        return root;
    }
Node *delNode(Node * root,int val){
    if(root==NULL){
        return NULL;

    }
    if(val<root->data){
        delNode(root->left,val);
    }
    else if(val>root->data){
        delNode(root->right,val);

    }
    
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        if (root->left == NULL || root->right == NULL)
        {
            return root->left ==NULL ? root->right : root->left;
        }
    

Node * IS =getinOrder(root->right);
    root->data= IS->data;
    root->right= delNode(root->right,IS->data);

return root;
}

void printinrange(Node * root,int start,int end){
    if(root==NULL){
        return;
    }
    if (start <= root->data  && root->data <= end)
    {
        printinrange(root->left,start,end);
        cout<<root->data;
        printinrange(root->right,start,end);

    }
    if(start>root->data){
        printinrange(root->right, start, end);
    }
    if(root->data<end){
        printinrange(root->left, start, end);
    }





}
void printpath(vector<int> path){
    cout<<"path :"<<" ";
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

void pathhelper(Node* root,vector<int> &path){
    if(root==NULL){
        return;
    }
    path.push_back(root->data);
    if(root->left==NULL && root->right==NULL){
        printpath(path);
        path.pop_back();
        return;
    }
    pathhelper(root->left,path);
    pathhelper(root->right,path);
    path.pop_back();
}
void roottoleaf(Node* root){
    vector<int> path;
    pathhelper(root,path);
}
bool validatehelper(Node * root,Node * min,Node* max){
        if(root==NULL){
            return true;

        }
        if(min!=NULL && root->data<=min->data){
            return false;
        }

        if(max!=NULL && root->data>=max->data){
            return false;
        }

       return  validatehelper(root->left,min,root) && 
        validatehelper(root->right,root,max);
}

bool validate(Node * root ){
          return   validatehelper(root,NULL,NULL);
}
     int main()  {
    int arr[6]={5,1,3,4,2,7};
    Node* root=buildbst(arr,6);
    //    cout<< search(root,7)<<endl;
    // inorder(root);
    // cout<<endl;
    // delNode(root,5);
    // inorder(root);
    // cout << endl;
       // printinrange(root,3,5);
      //  roottoleaf(root);
      cout<<  validate(root);
     return 0;
}
