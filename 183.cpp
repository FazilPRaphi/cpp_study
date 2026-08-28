#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
class Node {
public:
int data ;
Node* left;
Node* right;

Node(int val){
    data=val;
    left=right=NULL;
}

};

static int idx=-1;
Node*  buildtree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    } 

    Node *currNode = new Node(nodes[idx]);
   currNode->left= buildtree(nodes);
   currNode->right= buildtree(nodes);

   return currNode;
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return ;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return ;

    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
void levelOrder(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr= q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }
        int leftht= height(root->left);
        int rightht= height(root->right);
        int curr=max(leftht,rightht)+1;
        return curr;
    }

int count(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftcount=count(root->left);
    int rightcount=count(root->left);

    return leftcount+ rightcount+1;
}
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);

    return leftsum + rightsum + root->data;
}

int diam(Node* root){
    if(root==NULL){
        return 0;

    }
    int currDiam =height(root->left)+height(root->right)+1;
    int leftdiam=diam(root->left);
    int rightdiam=diam(root->right);

     int x1=max(currDiam, leftdiam);
     int x2 = max(x1,  rightdiam) ;
     return x2;
}

pair<int,int> diam2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
   pair<int,int> leftinfo= diam2(root->left);
   pair<int,int> rightinfo= diam2(root->right);
   int currdiam= leftinfo.second + rightinfo.second+1;
   int finaldiam=max(currdiam,max(leftinfo.first,rightinfo.first));
   int height= max(leftinfo.second,rightinfo.second) +1;

   return make_pair(finaldiam,height);
}

bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL || root2 == NULL)
    {
        return false;
    }
    if (root1->data != root2->data)
    {
        return false;
    }
    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}
bool issubtree(Node* root,Node* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }
    else if (root == NULL || subroot == NULL)
    {
        return false;
    }
    if(root->data==subroot->data){
        return isIdentical(root,subroot);
    }
    int isleftsubtree=issubtree(root->left,subroot);
    if(!isleftsubtree){
        return issubtree(root->right,subroot);
    }
    return true;
}


void topview(Node* root){
    queue<pair<Node*,int>> q;
    map<int,int> m;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair <Node*,int> curr=q.front();
        q.pop();
        Node * currNode=curr.first;
        int ht=curr.second;
        if(m.count(ht)==0){
            m[ht]=currNode->data;
        }
        if(currNode->left!=NULL){
            q.push(make_pair(currNode->left,ht-1));
        }
        if(currNode->right!=NULL){
            q.push(make_pair(currNode->right,ht+1));
        }
    }
    for(auto it:m){
        cout<<it.second<<" ";
    }
}
void kthelper(Node* root,int k,int currlevel){
    if(root==NULL){
        return;
    }
    if (currlevel == k)
    {
        cout <<root->data<<" ";
        return ;
    }
    kthelper(root->left,k,currlevel+1);
    kthelper(root->right,k,currlevel+1);
}
bool roottonode(Node *root, int n, vector<int> &path)
{
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==n){
        return true;
    }

    int isleft= roottonode(root->left,n,path);
    int isright= roottonode(root->right,n,path);

    if(isleft || isright){
        return true;
    }
    path.pop_back();
    return false;
}
void kthlevel(Node* root,int k){
    kthelper(root,k,1);
    cout<<endl;
    
}

int LCA(Node * root,int n1,int n2){
vector<int> path1;
vector<int> path2;
roottonode(root,n1,path1);
roottonode(root,n2,path2);
int lca=-1;
for(int i=0, j=0;i<path1.size() && j<path2.size(); i++ ,j++){
    if(path1[i]!=path2[j]){
        return lca;
    }
    lca=path1[i];
}
return lca;

}
Node * LCA2(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 ||root->data==n2){
        return root;
    }
    Node* leftlca= LCA2(root->left,n1,n2);
    Node* rightlca= LCA2(root->right,n1,n2);
    
    if(leftlca!=NULL &&rightlca !=NULL){
        return root;
    }
    return leftlca==NULL ?  rightlca : leftlca ; 
}
int dist(Node * root,int n){
if(root==NULL){
    return -1;
}
if(root->data==n){
    return 0;

}
int leftdist= dist(root->left,n);
if(leftdist!=-1){
    return leftdist+1;

}
int rightdist= dist(root->right,n);
if(rightdist!=-1){
    return rightdist+1;
}
return -1;
}
int kthansec(Node * root,int   node,int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==node){
        return 0;
    }
    int leftsub=kthansec(root->left,node,k);
    int rightsub=kthansec(root->right,node,k);
    if(leftsub==-1 && rightsub==-1){
        return -1;
    }
    int validval= leftsub ==-1 ? rightsub :leftsub;
    if(validval+1==k){
        cout<<"kth anscestor"<<root->data;
    }
    return validval+1;
}
int transform (Node* root){
    if(root==NULL){
        return 0;
    }
    int leftold= transform (root->left);
    int rightold= transform (root->right);
    int currOld=root->data;

    int leftNew = (root->left != NULL) ? root->left->data : 0;
    int rightNew = (root->right != NULL) ? root->right->data : 0;

    root->data = leftNew + rightNew + leftold + rightold;
    return currOld;
}
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node * root =buildtree(nodes);
    // levelOrder(root);
    // cout<<height(root)<<endl;
    // cout<<count(root)<<" ";
    // cout<<sum(root)<<" ";
    // cout<<diam(root)<<" ";
    // cout<<diam2(root).first;
    // Node * subroot= new Node(2);
    // subroot->left=new Node(4);
    // subroot->right=new Node(5);
    // cout<< issubtree(root,subroot)<<endl;
    // topview(root);
    // kthlevel(root,2);
    // int n1=4;int n2=5;
    // cout<<LCA2(root,n1,n2)<<" ";
    // cout<<dist(root,n1);
    transform(root);
    levelOrder(root);
    return 0;
}