#include<conio.h>
void f(int x, int y);
void main()
{
	int x, y;
	printf("enter a num");
	scanf("%d %d",&x,&y);
	f(x, y);
	getch();
     {
     	void f(int x, int y)
     	{
     		while(x<y)
     		{
     			printf("%d",x-y);
     			x=x+1;
     			y=y-1;
			 }
		 }
	 }
}
