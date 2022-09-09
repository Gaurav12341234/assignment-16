//6. Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    printf("Enter elements of matrix \"a\":");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    printf("matrix \"a\" is:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }  
    printf("Sum of Each rows:\n");
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
        printf("Sum of row%d is %d.\n",i+1,sum);
    }
     printf("Sum of Each columns:\n");
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[j][i];
        }
        printf("Sum of column%d is %d.\n",i+1,sum);
    }
    return 0;
}