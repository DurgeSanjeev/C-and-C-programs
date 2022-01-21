#include<stdio.h>
int main()
{
	char a;
	printf("enter the charecter");
	a=getchar();
	char b=(char)a;
	if(b>=65&&b<=90)
	b=b+32;
	else if(b>=97&&b<=122)
	b=b-32;
	a=(char)b;
	printf("converted char is %c",a);
	
}
