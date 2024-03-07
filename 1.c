#include<stdio.h>
#include<string.h>
void dsc(char str[],int str_len)
{   char temp,arr1[20]={0},arr2[20]={0};
    int k=0;
    
    
    
    for (int i = 0 ,j=0; i < str_len; i++)
    {
        if (str[i]<='Z' || str[i]>='A')
        {
            arr1[j]=str[i];
            j++;
        }
        else
        {   
            arr2[k]=str[i];
            k++;
        }
        
            
        
    for (int j = 0; j < str_len-i-1; j++)
    {
        
    
    
        if (str[j]<str[j+1])
        {
            temp=str[j+1];
            str[j+1]=str[j];
            str[j]=temp;     
        }
    }
        
    }
   
    puts(arr1);
    printf("\n");
    puts(arr2);
}

int main()
{
    char str[20];
    int str_len;
    printf("Enter the string:-");
    fgets(str,20,stdin);
    str_len=strlen(str);
    dsc(str,str_len);

    return 0;
} 