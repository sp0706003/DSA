#include<stdio.h>
void addition(int a[][10],int b[][10],int add[][10],int m,int n,int p,int q);
void multiply(int a[][10],int b[][10],int mult[][10],int m,int n,int p,int q);
void main()
{
    printf("Name:- Satya Pathak\n");
    printf("Roll No.:-2100320130151\n");
    int a[10][10],b[10][10],add[10][10],mult[10][10];
    int m,n,p,q,i,j;
    printf("enter rows and columns of first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("enter rows and columns of second matrix:\n");
    scanf("%d%d",&p,&q);
    printf("enter elements of first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    addition(a,b,add,m,n,p,q);
    multiply(a,b,mult,m,n,p,q);
}
void addition(int a[][10],int b[][10],int add[][10],int m,int n,int p,int q)
{
    int i,j;
    if(m==p)
    {
        if(n==q)
        {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
        }
        printf("Addition of two matrix be:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",add[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
    printf("addition not possible");
    }
}
void multiply(int a[][10],int b[][10],int mult[][10],int m,int n,int p,int q)
{
    int i,j,k;
    if(n==p)
    {
           for(i=0;i<m;i++)
           {
            for(j=0;j<q;j++)
            {
            mult[i][j]=0;
            }
           }

        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                for(k=0;k<n;k++)
                {
                    mult[i][j] = mult[i][j] + a[i][k]*b[k][j];
                }
            }
        }
      printf("multiplication of two matrix be:\n");
      for(i=0;i<m;i++)
      {
        for(j=0;j<q;j++)
        {
            printf("%d  ",mult[i][j]);
        }
        printf("\n");
      }
    }
    else
    printf("multiplication not possible");
}
