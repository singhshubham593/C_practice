#include<stdio.h>

//                      *
//                     * *
//                    * * *
//					 * * * *
//					* * * * * 
//				   * * * * * *
				    
									  
/*									     
 
int main(){
	int i,j,n=6;
	 
	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
} */
      //             *
      //            ***
	  //		   *****
	  //		  *******
	  //		 ********* 
			                     


int main(){
	int i,j,n=5;
	
	for(i=1;i<=n;i++){
		for(j=n-i;j>=0;j--){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}




