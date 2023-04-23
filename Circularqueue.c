#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void enqueue(int q[],int item,int max)
{
    if(f==(r+1)%max)
        printf("overflow\n");
    else{
        if(f==-1){
            f=0;
        }
        r=(r+1)%max;
        q[r]=item;
    }
}
void dequeue(int q[],int max){
    int temp;
    if(f==-1&&r==-1)
    printf("underflow\n");
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else{
        temp=q[f];
        printf("dequeue value is %d\n",temp);
        f=(f+1)%max;
    }
}
void display(int q[],int max){
    if(r>=f)
    {
        for(int i=f;i<=r;i=(i+1)%max)
        printf("%d",q[i]);
    }
    else{
        for(int i=f;i<max;i++)
        printf("%d,",q[i]);
        for(int i=0;i<=r;i++)
        printf("%d",q[i]);
    }
}
void main(){
    int q[5];
    printf("Satya Pathak 2100320130151\n");
    int n,x;
    printf("1 for enqueue\n2 for dequeue\n3 for display");
    while(1)
    {
        printf("\nenter the choice: ");
        scanf("%d",&n);
        switch(n){
            case 1:
            {
                printf("enter the value to queue: ");
                scanf("%d",&x);
                enqueue(q,x,5);
                break;
            }
            case 2:
            {
                dequeue(q,5);
                break;
            }
            case 3:
            {
                display(q,5);
                break;
            }
            default:
            {
            exit(0);
            }
        }
    }
}
