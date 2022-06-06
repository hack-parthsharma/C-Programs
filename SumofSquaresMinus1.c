#include<stdio.h>
int main()
{
	int n,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i!=n)
		{
			printf("%d+",(i*i)-1);
		}
		else
		{
			printf("%d",(i*i)-1);
		}
		
	}
	return 0;
}
