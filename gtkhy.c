#include<stdio.h>

void f (x,y);
void main()
void f(int x, int y)
 {
 	int x=3, y=6;
  while (x < y) {
    printf("%d ", y - x);
    x = x + 1;
    y = y - 1;
  }
}
