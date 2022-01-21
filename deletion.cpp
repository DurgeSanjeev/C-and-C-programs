#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,n,pos;
	printf("enter the no. of array");
	scanf("%d",&n);
	printf("enter the %d lememnts ",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the location where you want to delete");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("resultant of the array is \n");
	for(i=0;i<n-1;i++)
	{printf("%d\n",a[i]);
	
	}
	getch();
}
	
