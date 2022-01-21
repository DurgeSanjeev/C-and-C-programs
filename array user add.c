#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,sum=0;
	printf("enter 10 elements");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
}
    for(i=0;i<=9;i++)
    {
    	sum=sum+a[i];
	}
    
	printf("%d",sum);
}
