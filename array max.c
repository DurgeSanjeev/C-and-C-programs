#include<stdio.h>
#include<conio.h>
main()
{
	int a[5]={12,23,34,1,2},i,max=0;
	for(i<0;i<=4;i++)
	{
		if (a[i]>max)
		max=a[i];
	}
	printf("%d",max);
}
