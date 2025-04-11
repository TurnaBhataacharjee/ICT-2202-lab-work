#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
    
    
    
};
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }


}
struct node *create(int data){
    struct node *newnode;
    newnode=new(node);
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}
struct node *insert(struct node *root,int data){
    if(root==NULL){
       return create(data);
    }
    else if(root->data<=data){
        root->right=insert(root->right,data);
    }
    else if(root->data>=data){
        root->left=insert(root->left,data);
    }
    return root;
}
int main(){
    struct node *root;
    root=NULL;
    
    int n,data;
    cout<<"How many numbers to be sorted: ";

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        root=insert(root,data);
    }
    cout<<"The sorted list is ";
    inorder(root);



}