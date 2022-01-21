#include<stdio.h>
#include<conio.h>

int main()
{
	sum();
	mul();
	evenodd();
	mul();
	evenodd();
	sub();
}
    sum()
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d %d ",&a,&b);
	c=a+b;
	printf("the sum is= %d",c);
	
}	
	mul()
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("the mul is =%d" ,c);
	
} 

    sub()   
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("the sub is= %d",c);
								
}
    
    evenodd()
   {
   
	 int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a/2)
    printf("even");
    else
    printf("odd");
}

