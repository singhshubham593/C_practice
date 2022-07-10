#include<stdio.h>
#include<math.h>

// sum of digit.

int main(){
	int n,digit,sum=0;
	printf("Enter the number :");
	scanf("%d ",&n);
	
	while(n!=0){
		digit =n%10;
		sum=sum+digit;
		n=n%10;
	
	}
    	printf("The sum of the digit is :%d",sum);
    	return 0;
    	
}
