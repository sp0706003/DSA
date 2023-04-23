#include<stdio.h>
void transp(int matrix[][10],int m,int n);
void main()
{
    int matrix[10][10],m,n;
    printf("Enter the dimensions:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the matrix:");
    for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
            {
            scanf("%d",&matrix[i][j]);
            }
        }
    printf("Entered matrix is:\n");
     for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
           {
            printf("%d ",matrix[i][j]);
           }
        printf("\n");
        }
     transp(matrix,m,n);
}
void transp(int matrix[][10],int m,int n)
{
    int i,j;
    printf("Transpose of given matrix is:\n");
    for(int i=0;i<m;i++)
       {
       for(int j=0;j<n;j++)
          {
           printf("%d ",matrix[j][i]);
          }
          printf("\n");
       }
}
