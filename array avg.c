#include<stdio.h>
#include<conio.h>
main()
{
	int a[7],i,min ,max,avg;

	printf("enter the 7 numbers");
	for (i=0;i<7;i++)
	{
	  scanf("%d",&a[i]);
	}
   for (i=1;i<7;i++)
   {
   	if(a[i]>max)
   	{
   	max=a[i];
    }
	} 
   printf("max is %d\n",max);
   
   for (i=1;i<7;i++)
     {
     	if (a[i]<min)
     	{
		min=a[i];
	}
	}
	 printf("min is %d\n",min);
    avg=(min+max)/2;
    printf("avg is %d\n",avg);
     
}

