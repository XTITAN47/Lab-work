#include<stdio.h>
//=============== factorial =======================================================
int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    

}


//=========================== MAIN FUNCTION ========================================
int main()
{
    long n,res;
    printf("Enter the no:-");
    scanf("%ld",&n);
    res=fact(n);
    printf("%ld",res);
    
    
    return 0;
}