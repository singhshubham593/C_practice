#include<stdio.h>
#include<math.h>

// root of quadratic equation.

int main(){
	float a,b,c,d,r1,r2;
	printf("Enter the value of a,b and c.\n");
	 
	scanf("%f%f%f",&a,&b,&c);
	
	d=(b*b-4*a*c);
	if(d==0){
		printf("root are real and equal.");
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf("\nroot(r1)=%f and root(r2)=%f",r1,r2);
	}
		else if(d>0){
		printf("root are real and not equal.");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("root(r1)=%f and root(r2)=%f",r1,r2);
	}
		else{
		printf("root are imaginary.");
	}
	return 0;
}
