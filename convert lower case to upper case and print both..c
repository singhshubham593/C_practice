#include<stdio.h>

// to convert lowercase into uppercase giver by user .

int main(){
	char up,low;
	int ascii;
	
	printf("Enter the  lower case :");    // convert uppercase to lowercase
	scanf("%c",&low);                     // ascii =uppeer+32.
	                                     
	ascii=low-32;                              //convert lowercase to uppercase   
	printf("%c upper case is %c.",low,ascii);  // ascii=low-32. 
	
	 return 0;
}
