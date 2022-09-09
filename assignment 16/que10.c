//10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,count,row1,row2,row3;
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
    printf("Row with maximum no. of 1's.\n");
    for(i=0;i<=2;i++)
    {
        count=0;
        for(j=0;j<=2;j++)
        {
            if(a[i][j]==1)
                count++;
        }
        if(i==0)
            row1=count;
        else if(i==1)
            row2=count;
        else
            row3=count;
    }
    if(row1>row2)
    {
        if(row1>row3)
            printf("Maximum number 0f 1's in row1 is %d",row1);
        else
            printf("Maximum number 0f 1's in row3 is %d",row3);
    }
    else
    {
        if(row2>row3)
            printf("Maximum number 0f 1's in row2 is %d",row2);
        else
            printf("Maximum number 0f 1's in row3 is %d",row3);
    }
    return 0;
}