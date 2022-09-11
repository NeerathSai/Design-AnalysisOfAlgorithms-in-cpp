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
int height(Node* root)
{
if(root==NULL)
return -1;
else
{
int ltree =0 ;
ltree = height(root->left);
int rtree = height(root->right);
if(ltree > rtree)
{
return (ltree+1);
}
else
return (rtree+1);
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
int h = height(root);
cout<<"Height is " << h <<endl;
return 0;
}
