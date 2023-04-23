#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void enqueue(int q[],int item,int max)
{
    if(r==max-1)
    printf("overflow\n");
    else
    {
        if(f==-1)
        f=0;
        r=r+1;
        q[r]=item;
    }
}
void dequeue(int q[],int max)
{
    int temp;
    if(f>r)
    printf("underflow\n");
    else
    {
        temp=q[f];
        printf("dequeue value is %d\n",temp);
        f=f+1;
    }
}
void display(int q[],int max)
{
    for(int i=f;i<=r;i++)
    {
        printf("%d ",q[i]);
    }
}
void main()
{
    int q[10];
    printf("Satya PAthak 2100320130151\n");
    int n,x;
    printf("1 for enqueue\n2 for dequeue\n3 for display");
    while(1)
    {
        printf("\nenter the choice: ");
        scanf("%d",&n);
        switch (n)
        {
            case 1:
            {
                printf("enter the value to queue: ");
                scanf("%d",&x);
                enqueue(q,x,10);
                break;
            }
            case 2:
            {
                dequeue(q,10);
                break;
            }
            case 3:
            {
                display(q,10);
                break;
            }
            default:
            {
                exit(0);
            }
        }
    }
}
