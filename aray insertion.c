#include<stdio.h>
#include<conio.h>
main()
{
	int a[30],i,n,location,element;
	printf("enter the no. of elements you want to enter");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for (i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
  }
  printf("%d",a[i]);
  printf("enter the element you want to enter");
  scanf("%d",&element);
  printf("enter at what location you want to enter");
  scanf("%d",&location);
  for(i=n-1;i>location;i--)
  {
  	a[i+1]=a[i];
  }
    a[location]=element;
    for(i=0;i<n;i++)
	
    {
	printf("%d\n",a[i]);
}
}

