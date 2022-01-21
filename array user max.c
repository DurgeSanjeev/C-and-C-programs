#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,max=0;
	printf("enter 7 elements");
	for (i=1;i<=6;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for (i=1;i<=6;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
}
