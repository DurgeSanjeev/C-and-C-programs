#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],t,n;
	int i,j;
	
	printf("\n enter the size of array");
	scanf("%d",&n);
	
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
	
	if(a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		
	}
 }
	
	printf("sorted array is \n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}

