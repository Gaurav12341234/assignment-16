//7. Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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
    printf("Lower triangular of a matrix \"a\":\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(i<j)
                a[i][j]=0;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}