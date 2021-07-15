#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    node *left, *right;
};
node* getNode(int x){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
node* order(node *root,int data){
    if(!root){
        root=getNode(data);
        return root;
    }
    if(data<=root->data){
        root->left=order(root->left,data);
    }
    else root->right=order(root->right,data);
    return root;
}
node *solve(int a[],int n){
    if(!n) return NULL;
    node *root=NULL;
    for(int i=0;i<n;++i){
        root=order(root,a[i]);
    }
    return root;
}
void inOrder(node *root){
    if(!root) return;
    cout<<root->data<<" ";
    inOrder(root->left);
    
    inOrder(root->right);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        node *root=solve(a,n);
        inOrder(root);
        cout<<"\n";
        delete(root);
    }
}
