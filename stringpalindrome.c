#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter your string \n");
	gets(s1);
	int l=strlen(s1);
	int c=0;
	for(i=l-1;i>=0;i--)
	{
	
		s2[c]=s1[i];
		c++;
	}   
	if(strcmp(s1,s1)==0)  
	puts("palindrome");
	else 
	puts("Not palindrome");\
}
	
	