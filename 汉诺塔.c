#include<stdio.h>
void hannoi(int n,char a,char b,char c) 
{
	if(n==1)
	printf("%c-->%c\n",a,c);
	else
	{
		hannoi(n-1,a,c,b);
		printf("%c-->%c\n",a,c);
		hannoi(n-1,b,a,c);
	}
}
void main()
{
	int n;
	scanf("%d",&n);
    hannoi(n,'A','B','C');
 } 
