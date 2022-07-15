#include<stdio.h>

// fibonacci series up to nth term from loop.
/*
int main(){
	int i,n,f1,f2,f3;
	printf("Enter tne number :");
	scanf("%d",&n);
	f1=0;
	f2=1;
	printf("f1=%d f2=%d",f1,f2);
	for(i=3;i<=n;i++){
	
	f3=f2+f1;
    printf("\n%d",f3);
    f1=f2;
    f2=f3;
  }
  
}
  */
   // fabonacci series up to nth term from recursion.
   
   #include<stdio.h>
    
    int fibo(int n);
    
    int main(){
    	
    	fibo(6);
    	return 0;
	}
	
	int fibo(int n){
	    	if(n == 0){
			 return 0;
		    }
	     	if(n == 1){
	  	    	return 1;
	      	}
		
		int fib1 = fib(n-1);
		int fib2 = fib(n-2);
		int fibn = fib1 + fib2;
		printf("fib of %d is : %d\n",n,fibn);
		return fibn;
	}

