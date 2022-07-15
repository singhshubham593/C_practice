#include<stdio.h>

// to convert fahrenhiet to celsius.

int main(){
	float fahren,cel;
	
	printf("Enter the fahren :");
	scanf("%f",&fahren);
	
	cel=(fahren-31)/1.8;          // celsius or centigrade 
	                              // fahrenhiet = (centigrade*1.8)+32.
	
	printf("the celsius is %f ",cel);
	return 0;
}
