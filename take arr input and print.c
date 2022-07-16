#include<stdio.h>

int main(){
	int arr[5],i,*ptr;
	
	printf("Enter the Element :");
	
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
			printf("Element is :%d \n",arr[i]);
	 
	}
 
	return 0;
}
