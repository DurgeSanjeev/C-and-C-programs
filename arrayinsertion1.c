#include<stdio.h>
#include<conio.h>
main()
{
	int a[30],i,n,location,value;
     printf ("enter the no. of elements ");
	 scanf("%d",&n);
	 printf("enter %d elements ",n);
	 for (i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	  printf("enter the element to be inserted");
     scanf("%d",&value);
     printf("enter at what location you want to insert ");
     scanf("%d",&location);
      for(i=n-1;i>=location;i--)
      {
      	a[i+1]=a[i];
	  }
      a[location]=value;
      for (i=0;i<11;i++)
	  {
	  	if(i!=location)
	   printf("%d\n",a[i]);
	   }
      }
