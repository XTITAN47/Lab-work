#include<stdio.h>
//=================FUNCTION======================================
int sod(int n,int sum)
{
    int rem;
    rem= n%10;
    if (n==0)
    {   
        return sum;
    }
    return sod(n/10,sum+rem);
}
//================MAIN FUNCTION===============================
int main()
{
    int n,sum=0,res,a[10];
    printf("Enter the limit. :-");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:-",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {   
        res=sod(a[i],sum);
        printf("%d \n",res);
    }

    return 0;
}