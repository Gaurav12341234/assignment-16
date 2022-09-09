//3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[2][3],i,j,b[3][2];
    printf("Enter elements of matrix\"a\"");
    for(i=0;i<=1;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    printf("matrix \"a\" is:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }    
    printf("Transpose of matrix \"a\":\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}