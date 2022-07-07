#include<stdio.h>

// prime no or not.

int main(){
	int i,n,count=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
		
	}
	if(count==2){
		printf("prime no");
	}
	else{
		printf("not prime no");
	}
	
	return 0;
}
