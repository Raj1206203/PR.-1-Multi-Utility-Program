#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("enter c:");
	scanf("%f",&c);

	f=(c*9/5)+32;
	printf("\nthe f is:%.2f",f);

	getch();
}