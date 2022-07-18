#include<stdio.h>

//largest element of array

int main(){
	int arr[6]={2,3,5,6,17,8};
	int large,i;
	
	large =arr[0];
	for(i=1;i<6;i++){
		if(arr[i]>large){
			large=arr[i];
		}
	}
	printf("Largest Element ia %d",large);
}
