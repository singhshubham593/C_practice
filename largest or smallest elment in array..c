#include<stdio.h>

int main(){
    	int arr[10],i,n,small,big;
	
	    printf("\nEnter the size of array :");
    	scanf("%d",&n);
	    printf("\nEnter the element of arrays.");
	
	  for(i=0;i<n;i++)
	   scanf("%d",&arr[i]);
	   printf("\nelement of arrays.");
		for(i=0;i<n;i++)
		  printf("%d ",arr[i]);
		  big=small=arr[0];
		
		 for(i=0;i<n;i++){
		 
			 if(arr[i]>big)
				big=arr[i];
			 if(arr[i]<small)
				small=arr[i];
            }
    
	
	 printf("\nbiggest no is %d",big);
     printf("\nsmallest no is %d",small);
     return 0;
		
}
