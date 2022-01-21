#include<stdio.h>
#include<conio.h>
main()
{ 
int a[8],i,pos,n,value;
printf("enter the no of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element you want to insert");
scanf("%d",& value);
printf("position");
scanf("%d"  ,&pos);
for(i=4;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=value;
printf("elements after insertion ");
for(i=0;i<=n;i++)
printf("%d\t",a[i]);
}
