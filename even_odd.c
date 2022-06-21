#include <stdio.h>
#include <conio.h>
// to find the given no is even or odd.

int main(){
	int a;
	
	printf("given no is :");
	scanf("%d",&a);
	
	if(a%2 == 0){
		printf("Integer is even");
	}
	else{
		printf("Integer is odd");
	}
	return 0;
	
}
