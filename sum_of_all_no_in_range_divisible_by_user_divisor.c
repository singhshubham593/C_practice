#include<stdio.h>


int main(){
	int i;
	int initial;
	int final;
	int user;
	int sum=0;
	
	printf("Enter the range :\n");
	scanf("%d %d",&initial,&final);
	printf("Enter the diviser:");
	scanf("%d",&user);
	
	for(i=initial;i<final;i++){
		if(i%user==0){
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("\n\n The sum of no is :%d\n",sum);
}
