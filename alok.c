#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int a[30],i,no,pos;
 	printf("enter data =");
 	for(i=0;i<10;i++)
 	{
 		scanf("%d",&a[i]);
 	
	 }
	 printf("\nstored data=");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
	 printf("\n Enter posstion number=");
	 scanf("%d",&pos);
	 if(pos>10)
	 {
	 	printf("\n this is out of range=");
	 }
	 else
	 {
	 	printf("\n Enter new number=");
	 	scanf("%d",&no);
	 	--pos;
	 	for(i=10;i>=pos;i--)
	 	{
	 		a[i+1]=a[i];
		 }
		 a[pos]=no;
		 printf("\n new data number=");
		 for(i=0;i<10;i++)
		 {
		 	printf("%d\n",a[i]);
		 }
	}
	getch();
 }
