#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={12,34,56,78,90},i;
	int *p=a;
	printf("%d ",*p);
	printf("%d  ",*(p+3));
	printf("%d  ",*(a+2));
	printf("%d \n",*a);
	for(i=0;i<5;i++)
	printf("%d  ",*(i+a));
	getch();
	return 0;
}
