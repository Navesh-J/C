#include<stdio.h>
void main()
{
	int a;
	char ch;
	printf("Enter the character ");
	scanf("%c",&ch);
	int i=ch;
	if((i>=65&&i<=90)||(i>=97&&i<=122))
	a=1;
	else if(i>=48&&i<=57)
	a=2;
	else
	a=3;
	switch(a)
	{
		case 1: printf("Alphabet");
		break;
		case 2: printf("Number");
		break;
		default:
			printf("Special Character");
	}
	
}