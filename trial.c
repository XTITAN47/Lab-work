#include<string.h>
#include<stdio.h>
typedef struct student{
	int rollno;
	char name[100];
	int id;
	}student;
int main()
{
student s[10];
char str[20];
//==================Entry input================
for(int i=0;i<1;i++)
{
printf("\nRollNo:-");
scanf("%d",&s[i].rollno);
printf("Name:-"); getchar();
scanf( "%[^\n]",s[i].name); 
//strcpy(s[i].name,str);
printf("id:-");
scanf("%d",&s[i].id);
}


for(int i=0;i<1;i++)
{
printf("\nRollno:-%d",s[i].rollno);
printf("\nName:-%s",s[i].name);
printf("\nId:-%d",s[i].id);
}
return 0;}
