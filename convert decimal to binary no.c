#include<stdio.h>

// Convert decimal into binary.

int main(){
	int var,no,re,binary=0,i=0;
	printf("Enter the number :");
	scanf("%d",&no);
	var=no;
	while(no!=0){
		re=no%2;
		no=no/2;
		binary=binary+(re*i);
		i=i*10;
	}
	printf("binary number of %d is %d",var,binary);
	getch();
	return 0;
}
