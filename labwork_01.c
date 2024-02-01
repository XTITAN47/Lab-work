<<<<<<< HEAD
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
    int n,sum=0,res;
    printf("Enter the no. :-");
    scanf("%d",&n);
    res=sod(n,sum);
    printf("%d",res);

    return 0;
=======
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
    int n,sum=0,res;
    printf("Enter the no. :-");
    scanf("%d",&n);
    res=sod(n,sum);
    printf("%d",res);

    return 0;
>>>>>>> a036fb358422d3389171739a1e39f92a5dc99848
}