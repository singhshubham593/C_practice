#include<stdio.h>

// selection sort in accending order.

int main(){
	int i,j,n,temp,min;
	int a[i];
	
	printf("Enter the Element :");
	Scanf("%d",&n);
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;i++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("%d",a[min]);
	return 0;
}
