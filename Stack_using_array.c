#include<stdio.h>
#include<stdlib.h>
int stack[10],choice,n,top=-1,x,i;
void push()
{
    if(top>=n-1)
    {
        printf("tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow");
    }
    else
    {
        printf("The popped elements is %d",stack[top]);
        top--;
    }
}
void peek()
{
    printf("the top most element of stack is:%d",stack[top]);
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
int main()
{
    printf("Enter the size of STACK:");
    scanf("%d",&n);
    printf("choices are:1-push\n2-pop\n3-peek\n4-display\n5-exit\n");
    do
    {
        printf("Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf ("Please Enter a Valid Choice");
            }          
        }
    }
    while(choice);
    return 0;
}
