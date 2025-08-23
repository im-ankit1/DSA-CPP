#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

node* BuildTree(vector<int>& tree , int &idx){
    idx++;
    if(tree[idx]==-1)return NULL;
    node* root = new node(tree[idx]);
    root->left=BuildTree(tree , idx);
    root->right = BuildTree(tree , idx);
    return root;
}

void PrintTree(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    PrintTree(root->left);
    PrintTree(root->right);
}

int countnode(node* root){
    if(root == NULL)return 0;
    int leftnode = countnode(root->left);
    int rightnode = countnode(root->right);
    return leftnode + rightnode + 1;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }

    int lefth = height(root->left);
    int righth = height(root->right);
    return max(lefth , righth) + 1;
}

int maxele(node* root){
    if(root == NULL){
        return 0;
    }

    int maxval = max(maxele(root->left) , maxele(root->right));
    return max(maxval , root->data);
}

int sametree(node* root1 , node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    return root1->data == root2->data &&
     sametree(root1->left , root2->left) && sametree(root1->right , root2->right);
}

void mirror(node* root){
    
    if(root == NULL) return;
    node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    mirror(root->left);
    mirror(root->right);
    
    
}

int diameter(node* root){
    if(root == NULL){
        return 0;
    }

    int leftlong = height(root->left);
    int rightlong = height(root->right);
    int throughroot = leftlong + rightlong + 2;

    int lefdia = diameter(root->left);
    int rigdia = diameter(root->right);

    return max(throughroot , max(lefdia , rigdia));

}

void topview(node* root){
    if(root == NULL){
        return;
    }
    queue<pair<node* , int>>q;
    map<int , int> m;
    q.push({root , 0});

    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        node* curr = temp.first;
        int hd = temp.second;

        if(m.find(hd) == m.end()){
            m[hd] = curr->data;  
        }

        if(curr->left != NULL){
            q.push({curr->left , hd-1});
        }

        if(curr->right != NULL){
            q.push({curr->right , hd+1});
        }
    }

    cout << "Top View: ";
    for(auto it : m){
        cout << it.second << " ";
    }
    cout << endl;
}

int main(){
    vector<int> t1 ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int> t2 ={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    int idx1 = -1;
    node* root1 = BuildTree(t1 , idx1);
    int idx2 = -1;
    node* root2 = BuildTree(t2 , idx2);

    PrintTree(root1);
    cout<<endl;

    cout<<"Height of tree : "<<height(root1)<<endl;

    cout<<"Total Node : "<<countnode(root1)<<endl;

    cout<<"Max val : "<<maxele(root1)<<endl;

    mirror(root1);

    cout<<"Mirror tree : ";
    PrintTree(root1);
    cout<<endl;

    cout<<"Diameter Of Tree : "<<diameter(root1)<<endl;

    topview(root1);


    return 0;
}