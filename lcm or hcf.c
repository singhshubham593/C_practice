#include<stdio.h>

 // write a program to find HCF or LCM of two number;
 
int main(){
	int i,n1,n2,min,gcd,lcm;
	printf("Enter two number :");
	scanf("%d%d",&n1,&n2);
	
	min=(n1<n2)?n1:n2;
	
	for(i=0; i<=min; i++){
		if("n1%i==0"&&"n2%i==0"){
			gcd=i;
		}
	}
	lcm=(n1*n2)/gcd;
	printf("%d%d",gcd,
	lcm);
	return 0;
}
