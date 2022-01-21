
#include<stdio.h>
#include<conio.h>

int main()

{
	sum();
	mul();
	sub();
	evenodd();
}
    sum()
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the sum is= %d\n",c);
	
}	
	mul()                 //*
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("the mul is =%d\n" ,c);
	
} 

    sub()   
{
	int a,b,c;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("the sub is= %d\n",c);
								
}
    
    evenodd()
   {
   
	 int a;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a/2)
    printf("even\n");
    else
    printf("odd\n");
}

