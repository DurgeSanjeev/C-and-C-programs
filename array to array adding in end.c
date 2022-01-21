#include<stdio.h>
#include<conio.h>
main()
{
	int a[50],b[30],i,n,m;
	printf("enter the no of elements in first array");
scanf("%d",&n);
printf("enter %d elements:",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no of elements in second array");
    scanf("%d",&m);
    printf("enter %d elements:",m);
	for (i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<m;i++)
	{
		a[n+i]=b[i];
	}
	for (i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
