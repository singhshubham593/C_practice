#include<stdio.h>
#include<conio.h>

// to print real no, integer and character.
int main ()
{
	int a;
	char b;
	float c;
	
	printf ("Input an Integer\n");
	scanf("%d",&a);
	printf("Integer is :%d\n",a);
	
	fflush(stdin);
	printf ("Input a Character\n");
	scanf("%c",&b);
	printf("Integer is :%c\n",a);
	
	fflush(stdin);	
	printf ("Input a real numder\n");
	scanf("%f",&c);
	printf("Integer is :%f\n",c);
}
