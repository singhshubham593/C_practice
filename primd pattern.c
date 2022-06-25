#include<stdio.h>
 
int main(){
	int i,j,n=6;
	
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}




