#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* trav=NULL;
void insertqueue(){
    int val;
    printf("Enter value:");
    scanf("%d",&val);
    if(head==NULL){
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        head=newnode;
        trav=newnode;
    }
    else{
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        trav->next=newnode;
        trav=newnode;
    }
}
void printqueue(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,i;
    cout<<"How many numbers?:";
    cin>>n;
    for(i=0;i<n;i++){
        insertqueue();
    }
    printqueue();
    return 0;
}
