#include<stdio.h>

// add n number enter by user.

int main(){
	int i,n,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("Number is %d",sum);
	return 0;
}
