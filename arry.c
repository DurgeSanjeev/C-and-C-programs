#include<stdio.h>
#include<conio.h>
 void main()
{
	int i,a[10],no,pos;
	clrscr();
	printf("Enter data in array=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nstored data in array \n");
	for(i=0;i<10;i++);
	{
		printf("%d\n",a[i]);
	}
	printf("\nEnter new data=");
	scanf("%d",&no);
	--pos;
	for(i=10;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=no;
	printf("\nEnter new data=\t");
	for(i=0;i<11;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}
