#include<stdio.h>

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
