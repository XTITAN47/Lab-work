#include<stdio.h>   
int main()
{
    int a[10][10],r,c,n;
    printf("enter the no. of rows:-");
    scanf("%d",&r);
    printf("enter the no. of COLUMNS:-");
    scanf("%d",&c);
    printf("enter elements row wise:-");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("enter elements you want to search:-");
    scanf("%d",&n);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]==n)
            {
                printf("element found!!!!");
                printf("%d  row-%d   column-%d",n,i+1,j+1);
            }
            
        }
        printf("\n");
    }
    return 0;
}