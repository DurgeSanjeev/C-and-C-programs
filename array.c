#include<stdio.h>
#include<conio.h>
 main()
{
	int a[10];
	
	int i, large;
	printf("enter ten no.'s");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	large=a[0];
	 for (i=0;i<10;i++)
	 {
	 	if (a[i]>large)
	 	large=a[i];
}
printf("%d",large);
}
	 




 
