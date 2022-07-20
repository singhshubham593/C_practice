#include<stdio.h>

void swap(int *xp,int *yp){
	int temp;
	
	temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void bubblesort(int ar[],int n){
	int i,j;
	
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ar[i]>ar[j]){
				swap(&ar[j],&ar[j+1]);
			}
		}
	}
}
void printarray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("%d",ar[i]);
		printf("\n");
	}
}
int main(){
	int a[]={64,34,25,12,22,11,90};
	int ar[0];
	int n=ar[3];
	bubblesort(ar,n);
	printf("Sorted array is :");
	printarray(ar,n);
	return 0;
}
