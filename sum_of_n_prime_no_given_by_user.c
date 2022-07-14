#include<stdio.h>

// sum of n prime no given by user.

int main(){
	int n,i,sum=0,j;
	printf("Enter the number :");
	scanf("%d",&n);
	
	for(j=2;j<=n;j++){
		for(i=2;i<j;i++){
	   		if(j%i==0)
			break;
	    }
		if(i==j)
		{
		 
		   printf("%d ",i);
		   sum=sum+i;
	     }
	}
	printf("\n Sum of all %d prime number is %d",n,sum);
}
