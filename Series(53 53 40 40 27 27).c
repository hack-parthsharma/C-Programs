#include<stdio.h>
void main()
{
	int n,i,s=53,s1=53;
	scanf("%d",&n);
	printf("%d ",s);
	printf("%d ",s1);
	for(i=1;i<=n;i++)
	{
		if(s-s1==0)		
		{
			s=s-13;
			printf("%d %d ",s,s); 
		}
		else
		{
			s=s-13;
			printf("%d %d ",s,s); 
		}
	}
}
