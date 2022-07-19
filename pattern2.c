#include<stdio.h>

// pattern
/*
 1
 2 3
 4 5 6
 7 8 9 10 */

int main(){
	
	int i,j,n,k;
	printf("Enter number :");
	scanf("%d",n);
	k=1;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++,k++){
			
			printf("%d ",k);
		}
		printf("\n");
	}
}
