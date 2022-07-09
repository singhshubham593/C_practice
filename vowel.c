#include<stdio.h> 

// to check given word is vowel or  not.

int main ()
{
	char b;
	printf("Enter an alphabet :");
	scanf("%c",&b);
	
	if((b=='a')||(b=='A')||(b=='e')||(b=='E')||(b=='i')||(b=='I')||(b=='o')||(b=='O')||(b=='u')||(b=='U'))
	{
		printf("The input alphabet is a vowel");
		
	} else{
		printf("The input alphabet is not vowel");
	}
	return 0;
}
