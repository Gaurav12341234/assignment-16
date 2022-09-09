//2. Write a program to calculate the product of two matrices .
#include<stdio.h>
int main()
{
    int a[2][3],b[3][2],c[2][2]={0,0};
    int m,n,p,q,i,j,k;
    printf("Enter numbers of matrix\"a\":");
    for(m=0;m<=1;m++)
        for(n=0;n<=2;n++)
            scanf("%d",&a[m][n]);
    printf("Enter numbers of matrix\"b\":");
    for(p=0;p<=2;p++)
        for(q=0;q<=1;q++)
            scanf("%d",&b[p][q]);
    printf("Matrix \"a\":\n");
    for(m=0;m<=1;m++)
    {
        for(n=0;n<=2;n++)
            printf("%d ",a[m][n]);
        printf("\n");
    }
    printf("Matrix \"b\":\n");
    for(p=0;p<=2;p++)
    {
        for(q=0;q<=1;q++)
            printf("%d ",b[p][q]);
        printf("\n");
    }
    if(n==p)
    {
        printf("Product of matrix \"a\" and \"b\" is:\n");
        for(i=0;i<=1;i++)
            for(j=0;j<=1;j++)
                for(k=0;k<=2;k++)
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
        for(i=0;i<=1;i++)
        {
            for(j=0;j<=1;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
}