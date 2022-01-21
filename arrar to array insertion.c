#include<stdio.h> 
#include<conio.h>

main()
{
int a[50],b[30],i,n,m,location;
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
	printf("enter the location you want to insert");
	scanf("%d",&location);
	for (i=n-1;i>location;i--)
	{
		a[m+i]=a[i];
	}
     for (i=0;i<m;i++)
     {
     	a[location+i]=b[i];
}
	 for(i=0;i<m+n;i++)
	 {
	 
	 printf("%d\n",a[i]);
}}	
 
