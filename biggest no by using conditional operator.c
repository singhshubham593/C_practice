#include<stdio.h>

// biggest of 3 no using conditional operator;

int main(){
	int a,b,c;
	
	printf("Enter no an,b and c");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n");
	
	// condition?expression1:expression2;
	
	(a>b && a>c)?printf("%d",a):(b>c)?printf("%d",b):printf("%d",c);
}
