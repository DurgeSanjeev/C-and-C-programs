#include<stdio.h> 
#include<conio.h>
main() 
{
	int a[30],i=0,u,n  ,j,temp;
	printf("enter the no. elements");
	scanf("%d",&u);
	printf("enter %d elements");
	for(i=0;i<n;i++);
	{
		scanf("%d",&a[i]);
	}
	j=n-1;
	while (i<j)
	{
		while (a[i]%2==0)
		{
			i++;
		}
		while(a[j]%2!=0);
		{
		j++;	 
		}
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	
}
