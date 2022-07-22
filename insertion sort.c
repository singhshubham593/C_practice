#include<stdio.h>

// insertion sort.

int main(){
	int i,j,temp;
	int a[6]={7,3,5,4,2,6};
	for(i=1;i<5;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	printf("%d",a[i]);
	return 0;
}
