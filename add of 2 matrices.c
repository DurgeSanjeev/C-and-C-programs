#include<stdio.h>
#include<conio.h>
main()
{
   int A[3][3],B[3][3],c[3][3],i,j;
printf("enter 9 elements");
for (i=0;i<=3;i++)
for(j=0;j<=3;i++)
{
	scan("%d",&A[i][j]);
 } 
 printf("enter 9 elements");
for (i=0;i<=3;i++)
for(j=0;j<=3;i++)
{
	scan("%d",&B[i][j]);
 } 
 for (i=0;i<=3;i++)
for(j=0;j<=3;i++)
{

   C[i][j]=A[i][j]+B[i][j];
 printf("%d",C[i][j]);
}
}
