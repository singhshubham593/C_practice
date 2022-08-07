#include<stdio.h>


int main(){
	int arr[100];
	int i,element,size,loc;
	printf("Enter the size of array.");
	scanf("%d",&size);
	printf("Enter the array : ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("\nEnter the no to insert : ");
	scanf("%d",&element);
	printf("\nEnter location to insert element.");
	scanf("%d",&loc);
	loc--;
	printf("\n %d(element) is insert at %d(location) is ",element,loc);
	for(i=size-1;i>=loc;i--){
		arr[i+1]=arr[i];
	}
	arr[loc]=element;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
   	}
	
	return 0;
}
