#include<iostream>
using namespace std;
struct bst{
    int data;
    struct bst* left=NULL;
    struct bst* right=NULL;
};
void createtree(int val,struct bst* root){
    if(val<root->data){
        if(root->left==NULL){
            struct bst* newbst=(struct bst*)malloc(sizeof(struct bst));
            newbst->data=val;
            root->left=newbst;
        }
        else{
            createtree(val,root->left);
        }
    }
    else{
        if(root->right==NULL){
            struct bst* newbst=(struct bst*)malloc(sizeof(struct bst));
            newbst->data=val;
            root->right=newbst;
        }
        else{
            createtree(val,root->right);
        }
    }
}
int main(){
    int i,n,val;
    cout<<"Enter no.of nodes required:";
    cin>>n;
    struct bst* root=(struct bst*)malloc(sizeof(struct bst));
    cout<<"Enter root value:";
    cin>>root->data;
    for(i=0;i<n-1;i++){
        cout<<"Enter value:";
        cin>>val;
        createtree(val,root);
    }
    return 0;
}
