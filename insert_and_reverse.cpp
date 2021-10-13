#include<iostream>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertnode(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void reverse(){
    struct node *after=NULL;
    struct node *prev=NULL;
    struct node *current=head;
    while(current!=NULL)
    {
    after=current->next;
    current->next=prev;
    prev=current;
    current=after;
}
head=prev;
}
void printnode(){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main(){
    int i,no;
    printf("Enter no:");
    scanf("%d",&no);
    for(i=0;i<no;i++){
        insertnode();
    }
    printqueue();
    printnode();
    return 0;
}
