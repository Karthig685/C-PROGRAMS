#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* createNode(int value){
<<<<<<< HEAD
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
}

struct Node* bg(struct Node *head, int value){
    struct Node *newNode = createNode(value);
=======
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
}

struct Node* bn(struct Node *head, int value){
    struct Node* newNode=createNode(value);
>>>>>>> pract
    newNode->next=head;
    return newNode;
}

<<<<<<< HEAD
struct Node* ed(struct Node *head, int value){
    struct Node *newNode = createNode(value);
    if (head==NULL) return newNode;
    struct Node *temp=head;
=======
struct Node* en(struct Node *head, int value){
    struct Node* newNode = createNode(value);
    if (head==NULL) return newNode;
    struct Node* temp=head;
>>>>>>> pract
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}

<<<<<<< HEAD
void dis(struct Node *head){
    struct Node *temp=head;
=======
void pr(struct Node *head){
    struct Node* temp=head;
>>>>>>> pract
    while (temp!=NULL){
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

<<<<<<< HEAD
int main(){
    struct Node *head=NULL;
    head=bg(head,10);
    head=ed(head,20);
    head=ed(head,30);
    dis(head);
=======
void suml(struct Node* head){
    struct Node* temp=head;
    int sum=0;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }
    printf("The sum of the linkedlist is %d \n",sum);
}

int main(){
    struct Node* head=NULL;
    head=bn(head,100);
    head=en(head,200);
    head=en(head,300);
    pr(head);
    suml(head);
>>>>>>> pract
}