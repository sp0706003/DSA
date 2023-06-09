#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node*p1;
};
struct node*p = NULL;
void createList()
{
    if (p == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));
            p = newnode;
            temp = p;
            printf("\nEnter number to be inserted : ");
            scanf("%d", &data);
            p->info = data;
            for (int i = 1; i <= n; i++) {
                newnode = malloc(sizeof(struct node));
                temp->p1 = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->p1;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}
void traverse()
{
    struct node* temp;
    if (p == NULL)
        printf("\nList is empty\n");
    else {
        temp = p;
        while (temp != NULL) {
            printf("Data:%d\n", temp->info);
            temp = temp->p1;
        }
    }
}
void insert_at_Front()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->info = data;
    temp->p1 = p;
    p = temp;
}
void insert_at_End()
{
    int data;
    struct node *temp, *start;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->p1 = 0;
    temp->info = data;
    start = p;
    while (start->p1 != NULL) {
        start = start->p1;
    }
    start->p1 = temp;
}
void insert_at_Position()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
    temp = p;
    newnode->info = data;
    newnode->p1= 0;
    while (i < pos - 1) {
        temp = temp->p1;
        i++;
    }
    newnode->p1 = temp->p1;
    temp->p1= newnode;
}
void delete_at_First()
{
    struct node* temp;
    if (p == NULL)
        printf("\nList is empty\n");
    else {
        temp = p;
        p = p->p1;
        free(temp);
    }
}
void delete_at_End()
{
    struct node *temp, *prevnode;
    if (p == NULL)
        printf("\nList is Empty\n");
    else {
        temp = p;
        while (temp->p1 != 0) {
            prevnode = temp;
            temp = temp->p1;
        }
        free(temp);
        prevnode->p1 = 0;
    }
}
void delete_at_Position()
{
    struct node *temp, *position;
    int i = 1, pos;
    if (p == NULL)
        printf("\nList is empty\n");
    else {
        printf("\nEnter index : ");
          scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = p;
        while (i < pos - 1) {
            temp = temp->p1;
            i++;
        }
        position = temp->p1;
        temp->p1 = position->p1;
        free(position);
    }
}
int main()
{
    int choice,b;
    printf("\n\t1  Traverse the linked list\n");
    printf("\t2  insertion at starting\n");
    printf("\t3  insertion at end\n");
    printf("\t4  insertion at any position\n");
    printf("\t5  deletion at starting\n");
    printf("\t6  deletion at end\n");
    printf("\t7  deletion at any position\n");
    printf("\t8 To exit\n");
    while (1) {
        printf("\n Enter Choice :");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                traverse();
                break;
            case 2:
                insert_at_Front();
                break;
            case 3:
                insert_at_End();
                break;
            case 4:
                insert_at_Position();
                break;
            case 5:
                delete_at_First();
                break;
            case 6:
                delete_at_End();
                break;
            case 7:
                delete_at_Position();
                break;
            default:{
                printf("Incorrect Choice\ncontinue:");
                scanf("%d",&b);
                if(b!=1)
                exit(0);
            }
        }
    }
    return 0;
    
}
