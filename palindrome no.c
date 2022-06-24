#include<stdio.h>
#include<math.h>

int main(){
	int n,rem,temp,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	 temp=n;
	  while(n>0){
	    
	  	sum=sum*10+n%10;
	  	n=n/10;
	  }
	  n=temp;
	  if(sum==temp){
	  	printf("palindrome no");
	  	
	  }else{
	 
	  printf("not palindrome no"); 
	  }
	  return 0;
}
