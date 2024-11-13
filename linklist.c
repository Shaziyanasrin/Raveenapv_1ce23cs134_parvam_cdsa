#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
} node;
node* createnode(int value){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}
void append(node** head ,int value){
    node* newnode=createnode(value);
    if(*head==NULL){
        *head=newnode;
        return;
    }
    node* temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    } 
    temp->next=newnode;
}
    void deletenode(node** head,int value){
        node* temp=*head;
        node* prev=NULL;
        if(temp!=NULL && temp->data==value){
            *head=temp->next;
            free(temp);
            return;
        }
        while(temp!=NULL && temp->data!=value){
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL){
            printf("value %d not found in the list.\n",value);
            return;
        }
        prev->next=temp->next;
        free(temp);
    }
    void displaylist(node* head){
        node* temp=head;
        printf("linkedlist: ");
        while(temp!=NULL){
            printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    }
    int main()
    {
        node* head=NULL;
        append(&head,101);
        append(&head,202);
        append(&head,303);
        displaylist(head);
        deletenode(&head,202);
        displaylist(head);
        deletenode(&head,404);
        return 0;
        
    }

