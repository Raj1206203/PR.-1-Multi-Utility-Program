#include<stdio.h>
#include<conio.h>
void main()
{
	int fa,sa,ta;
	clrscr();
	printf("enter fa:");
	scanf("%d",&fa);
	printf("enter sa:");
	scanf("%d",&sa);

	ta=180-(fa+sa);
	printf("\nta of triangle is:%d",ta);



	getch();
}