#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *tail=NULL;
void enqueue(){
    int data;
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("Enter data to node");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    tail->next=start;
}
void dequeue(){
    struct node*p;
    if(start==NULL){
        printf("Underflow\n");
        return;
    }
    p=start;
    start=p->next;
    tail->next=start;
    printf("deleted item is: %d",p->data);
}
void display(){
    struct node *p;
    p=start;
    if(start==NULL){
        printf("Queue is empty");
        return;
    }
    do{
        printf("data =%d\n",p->data);
        p=p->next;
    }while (p!=start);
}

int main()
{
    int n,choice;
    printf("1 for enqueue\n");
    printf("2 for dequeue\n");
    printf("3 for display\n");
    while (1)
    {
        printf("\nenter the choice:");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
        {
            enqueue();
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        default:
            exit(0);
        }
    }
    
 return 0;
}
