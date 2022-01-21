#include<stdio.h>
struct student
{
	char name[30];
	float per;
	int reg;

}s[3];


int main()
{
	
struct student s[3];
int i;
for (i=0;i<3;i++)
{
	printf("enter name");
	gets(s[i].name);
	print("enter the no.");
	scanf("%d",&s[i].reg);
	printf("enter percentage");
	scanf("%f",&s[i].per);
	
}

}
