#include<stdio.h>
int main()
{
	int i,j=0;
	char a[10],b[10];
	printf("Enter the String: ");
	gets(a);
	for(i=0;a[i]!='\0';i+2)
	{
		b[j++]=a[i];
	}
	puts(b);
	return 0;
}
		
	
	
	
