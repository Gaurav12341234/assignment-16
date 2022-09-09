//4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[4][4],i,j,sum=0;
    printf("Enter elements of matrix \"a\":");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d",&a[i][j]);
    printf("matrix \"a\" is:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }  
    printf("Sum of right diagonal of matrix \"a\" is:");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            if(i+j==3)
                sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}