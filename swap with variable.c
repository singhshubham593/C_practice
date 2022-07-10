#include<stdio.h>

// swap value with variable.

int main(){
	int a,b,c;
	printf("Enter the value of a and b :");
	scanf("%d%d",&a,&b);
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("swap value is a=%d ",a);
	printf("swap value is b=%d",b);
	return 0;
}
