#include<stdio.h>

// by arrey, avg of no.

int main(){
	int arr[5],i,sum=0;
	float avg;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		sum=sum+ arr[i];
	}
	avg = sum/5.0;
	
	printf("sum of arr is : %d\n",sum);
	printf("Avg of arr is %f",avg);
}
