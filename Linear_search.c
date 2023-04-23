#include<stdio.h>
int main()
{
    printf("Name:-Satya Pathak\n");
    printf("Roll No.:- 2100320130151\n");
    int arr[100],n,num,i,j;
    printf("enter number of elements in the array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("array be:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nenter element to be search:- ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
           j=i+1;
        }
    }
    if(j>0)
    {
        printf("element %d found at %d location",num,j);
    }
    else
    {
        printf("element not found");
    }
 return 0;
}
