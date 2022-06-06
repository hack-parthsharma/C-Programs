#include<stdio.h>
int main()
{
	int a=1,i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j!=0)
		{
			printf("%d ",a);
			j--;
			a++;
		}
		pritnf("\n");
	}
	return 0;

}
