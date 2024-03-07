#include<stdio.h>
int main()
{
    int arr[20],n;
    printf("enter the lenght of array:-");
    scanf("%d",&n);
    printf("Enter the elements of array:-");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int max=*(p+0), min=*(p+0);
    for (int i = 0; i < n; i++)
    {
        if (*p<*(p+i))
        {
            max=*(p+i);
        }
        if (*p>*(p+i))
        {
            min=*(p+i);
        }

    }
    printf("Largest element:-%d \n",max);
    printf("smallest element:-%d \n",min);     
return 0;
}
