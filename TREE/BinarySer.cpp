#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //constructor
    node(int val){
        data = val;
        left = right = NULL;
    }
};

node* buildtree(vector<int>& preorder , int& idx){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }
    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder, idx);
    root->right = buildtree(preorder , idx);

    return root;

}

//PRE-ORDER ROOT , LEFT , RIGHT
void preOrder(node* root){
    if(root == NULL){
        return;
    }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);

}

//inorder LEFT , ROOT , RIGHT
void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//postorder left right root
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

//height of the tree
 int height(node* root ){
    if(root == NULL){
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht , rightht)+1;

 }

 int countnode(node* root){
    if(root == NULL){
        return 0;
    }
     int leftcount = countnode(root->left);
     int rightcount = countnode(root->right);
     return leftcount+rightcount + 1;

 }

 int sum(node* root){
    if(root == NULL){
        return 0;
    }
    int leftsum = sum(root->left);
    int rightsum = sum(root->right);
    return leftsum+rightsum+root->data;
 }

 bool isSame(node* root , node* root2){
    if(root == NULL || root2 == NULL){
        return root == root2;
    }

    bool isleftsame = isSame(root->left , root2->left);
    bool isrightsame = isSame(root->right , root2->right);
    return isleftsame && isrightsame && root->data == root2->data;
 }

int main(){
    vector<int> t1 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int> t2 = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx1 = -1;
    node* root = buildtree(t1 , idx1);
    int idx2 = -1;
    node* root2 = buildtree(t2 , idx2);
    if(isSame(root , root2)){
        cout<<"Equal tree"<<endl;
    }
    else{
        cout<<"Not enqual"<<endl;
    }
    
    preOrder(root);
    
cout<<endl;
    inorder(root);
    
cout<<endl;
    postorder(root);
     

cout<<endl;
    cout<<"Height of tree : "<<height(root)<<endl;

    cout<<"Total node : "<<countnode(root)<<endl;

    cout<<"Sum of node : "<<sum(root)<<endl;
return 0;
}