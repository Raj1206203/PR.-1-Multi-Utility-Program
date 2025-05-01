#include<stdio.h>
#include<conio.h>
void main()
{
	float base_sal,hra_per,da_per,ta_per;
	float hra,da,ta,gs;
	clrscr();
	printf("enter the base_sal");
	scanf("%f",&base_sal);
	printf("enter the hra_per");
	scanf("%f",&hra_per);
	printf("enter the da_per");
	scanf("%f",&da_per);
	printf("enter the ta_per");
	scanf("%f",&ta_per);

	hra=(hra_per/100)*base_sal;
	da=(da_per/100)*base_sal;
	ta=(ta_per/100)*base_sal;
	gs=base_sal+hra+da+ta;

	printf("\nthe gs is:%f",gs);

   getch();
}