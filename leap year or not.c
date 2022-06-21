#include <stdio.h>

int main ()
{
	int n;
	printf("Enter Year\n");
	scanf("%c",n);
	
	if((n%400 == 0)||(n%4 == 0 && n%100)){
		printf("It is a leap year");
	}
	else{
		printf("It is not leap year ");
	}
	return 0;
}
