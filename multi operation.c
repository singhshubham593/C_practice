 #include <stdio.h>

int main()
{
	int a,b,c,ch;
	printf("1.Addition\n 2.Subtraction\n 3.multiplication\n 4.division\n");
	printf("Enter your choice");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			c = a+b;
			printf("sum = %d",c);
			break;
		case 2:
			c = a-b;
			printf("sub = %d",c);
			break;
		case 3:
			c = a*b;
			printf("mult = %d",c);
			break;
	case 4:
			c = a/b;
			printf("div = %d",c);
			break;
		default : printf("Invalid choice");
			
							
	}
	printf("result = %d \n",c);
	return 0;
}
