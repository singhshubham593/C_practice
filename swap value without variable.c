#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the value of a and b :");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap number of a is %d and b is %d",a,b);
	return 0;
}
