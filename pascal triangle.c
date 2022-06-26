#include<stdio.h>
#include<conio.h>

int main(){

     int row,col,space,n,no;
     
    printf("Enter the no of row :");
    scanf("%d",&no);
    
    for(row=0;row<=no;row++){
    	for(space=0;space<=no-row;space++){
    		printf(" ");
		}
		n=1;
		for(col=0;col<=row;col++){
			printf(" %d",n);
			n=n*(row-col)/(col+1);//for pascal triangluar form
		}
		printf("\n");
		
	}
	getch();
	return 0;
}
