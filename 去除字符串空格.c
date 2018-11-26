#include<stdio.h>
void k(char str[])
{
	int i,j;
	for(i=0;str[i]==' ';i++);        

 for(j=0;str[i];)str[j++]=str[i++];       

 for(i--;str[i]==' ';i--)str[i]='\0';   

}
void main()
{
	char str[1000];
	gets(str);
	k(str);
	printf("%s",str);
 } 
