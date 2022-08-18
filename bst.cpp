#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Node{

    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }

};




Node* insertintoBST(Node* &root,int data){

    //base case
    if (root==NULL)
    {
        root=new Node(data);
        return root;

    }
    //insert in right
    if(data>(root->data)){
        root->right=insertintoBST(root->right,data);

    }
    //insert in left
    else{
        root->left=insertintoBST(root->left,data);
    }

    return root;
    
};

void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
    }
};


void inorder(Node* &root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    
    inorder(root->left);

    

    inorder(root->right);


}


int main(){

Node* root =NULL;
cout<<"enter a data"<<endl;
takeInput(root);
inorder(root);

return 0;
}