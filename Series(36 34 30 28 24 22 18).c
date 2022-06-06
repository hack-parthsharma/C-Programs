#include<stdio.h>
void main()
{
	int n,i,s=36;
	scanf("%d",&n);
	printf("%d ",s);
	for(i=1;i<n;i++)
	{
		if(i%2==0)		
		{
			s=s-4;
			printf("%d ",s); 
		}
		else
		{
			s=s-2;
			printf("%d ",s);
		}
	}
}
