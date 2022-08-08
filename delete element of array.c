#include<stdio.h>

//to delete element in a array.

int main(){
	int arr[100];
	int i,element,size,j;
	//to take size of array.
	printf("Enter the size of array.");
	scanf("%d",&size);
	printf("Enter the array : ");
	//to take array element
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	//to print taken element
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	//to take element which you is deleting
	printf("\nEnter the no to delete : ");
	scanf("%d",&element);
 
	//to delete element which is given by user
	for(i=0;i<size;i++){
		 if(arr[i]==element){
		 	for(j=i;j<(size-1);j++){
		 		arr[j]=arr[j+1];
			}
			 break;
		 }
	}
	//to print array after delete element.
	for(i=0;i<(size-1);i++){
		printf("%d",arr[i]);
   	}
	
	return 0;
}
