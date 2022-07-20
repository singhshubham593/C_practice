#include<stdio.h>

int main(){
	int i,j,n,temp;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n-1;i++){
	printf("Enter the Element :");
	Scanf("%d",&a[i]);
}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("After bubble sort :");
	for(i=0;i<n-1;i++){
	
	print("%d",a[i]);
	return 0;
	
	}
	
}
