#include<stdio.h>
#include<math.h>

// to add two matrix (row=3 and coloum=3)

int main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	
	// for to reading 1st matrix row and coloum,
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	  // for to reading 2nd matrix row and coloum,
	
		for(i=0;i<3;i++){
	    	for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
     	 }
	}
	
	// for to read actual element and sum,
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			
		}
	 	printf("\n");
	}
	
}
