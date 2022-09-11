#include<iostream>
using namespace std;
struct Node
{
int data;
Node* left;
Node* right;
};
Node* GetNewNode(int data)
{
Node * temp= new Node();
temp->data = data;
temp->left = NULL;
temp->right = NULL;
return temp;
}
Node* Insert(Node * root , int data)
{
if(root == NULL)
{
root = GetNewNode(data) ;
return root;
}
else if(data <= root->data)
{
root->left = Insert(root->left,data);
}
else
{
root->right = Insert(root->right,data);
}
return root;
}
void preorder(struct node* root){
if(root == NULL){
return;
}
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}
void postorder(struct node* root){
if(root==NULL){
return;
}
postorder(root->left);
postorder(root->right);
cout<<root->data<<" ";
}
void inorder(struct node* root){
if(root==NULL){
return;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
int countNodes(node* root){
if(root==NULL){
return 0;
}
return 1+countNodes(root->left)+countNodes(root->right);
}
int sumNodes(node* root){
if(root == NULL){
return 0;
}
return sumNodes(root->left)+sumNodes(root->right) + root->data;
}
int leafNodes(node* root){
if(root==NULL){
return 0;
}else{
if(root->left==NULL && root->right==NULL){

return 1;
}
return leafNodes(root->right)+leafNodes(root->left);
}
}
int DepthOfTree(node* root){
if(root==NULL){
return 0;
}else{
int lDepth = DepthOfTree(root->left);
int rDepth = DepthOfTree(root->right);
if(lDepth>rDepth){
return(lDepth+1);
}else{
return (rDepth+1);
}
}
}
int main()
{
Node* root = NULL;
int n;
cout<< "Enter the Numbers to be inserted"<<endl;
cin>>n;
int a[n];
cout<<"Enter the Numbers"<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int i=0;i<n;i++)
{
root = Insert(root,a[i]);
}
cout<<"Not Found";
return 0;
}
