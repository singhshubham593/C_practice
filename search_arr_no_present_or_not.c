#include<stdio.h>

// to search no is present in array or not.

int main(){
	int arr[100];
	int i,n,search;
	printf("Enter the size of Element.");
	scanf("%d",&n);
	
	//to take arr element.
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("array is ");
	
	//to print array element.
	
	for(i=0;i<n;i++){
      printf("%d",arr[i]);	
	}
	printf("\nEnter the you want to search is ");
	scanf("%d",&search);
	
	//to search no in array.
	
	for(i=0;i<n;i++){
	 if(arr[i]==search){
	 	printf("The no is present at %d index\n",i);
	    }
	 }
	return 0;
}
