#include<stdio.h>   


    void merge(int *arr1,int *arr2,int n1,int n2)
        {
            printf("Enter the lenght of array:-");
            scanf("%d",&n1);
            printf("Enter the lenght of array:-");
            scanf("%d",&n2);
            printf("Enter the elements in array1:-");
            for (int i = 0; i < n1; i++)
            {
                scanf("%d",&arr1[i]);

            }
            printf("Enter the elements in array2:-");
                for (int i = 0; i < n2; i++)
                {
                    scanf("%d",&arr2[i]);
                    
                }
            int *p=arr1, *q=arr2;
                for (int i = 0; i < n1; i++)
                {
                    *(p+n1+i)=*(q+i);
                }
            printf("-----Elements of merged array----------");
            int n= n1+n2;
            for (size_t i = 0; i < n; i++)
            {
                printf("%d \n",arr1[i]);
            }

        }

int main()
{
    int arr1[20],arr2[20],n1,n2;
    merge(arr1,arr2,n1,n2);
    
return 0;
}