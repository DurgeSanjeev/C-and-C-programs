#include<stdio.h>
#include<conio.h>
int main()
{
	int *p=NULL;
	{
		int a=56;
		p=&a;
		printf("%d %u \n",*p,p);
		
	}
	printf("%d %u ",*p,p);
	getch();
	return 0;
}
