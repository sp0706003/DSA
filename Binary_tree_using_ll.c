#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(struct node *root){
    int data;
    printf("data\n");
    scanf("%d",&data);
    root->data=data;
    if(data==-1){
        return NULL;
    }
    printf("Enter Left:");
    struct node *left;
    left=malloc(sizeof(struct node));
    root->left=create(left);
    printf("Enter Right:");
    struct node *right;
    right=malloc(sizeof(struct node));
    root->right=create(right);
    return root;
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
int main()
{
    struct node *root;
    root=malloc(sizeof(struct node));
    root=create(root);
    printf("Root data is: %d\n",root->data);
    printf("inorder traversal:");
    inorder(root);
    return 0;
}
