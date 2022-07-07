#include<stdio.h>
#include<math.h>

int main(){
	
	int n;
	printf("Enter the number :\n");
	scanf("%d",&n);
    int rem,temp=n,p=0;
	
	while(n>0){
		rem=n%10;
		p=(p)+(rem*rem*rem);
		n=n/10;
	}
	if(temp==p){
		printf(" Armstrong Number.");
	}
	else{
		printf("Not Armstrong Number.");
	} 
	return 0;
}
