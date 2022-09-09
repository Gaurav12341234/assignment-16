//9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,count=0;
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
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(a[i][j]!=0)
                count++;
        }
    }
    if(count<9/2)
        printf("\"YES!\" It is a Sparse matrix");
    else
        printf("\"NO!\" It is not a Sparse matrix");
    return 0;
}