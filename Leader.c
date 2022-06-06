#include<stdio.h>
int main()
{
	int a[100],i,j,n,flag=0,leader;
	scanf("%d",&n);
	for(i==0;i<n;i++)
		scanf("%d",&a[i]);
	leader=a[n-1];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				flag=1;
			else
			{
				flag=0;
				break;
			}
				
		}
		if(flag==1)
			printf("%d ",a[i]);
	}
	printf("%d",leader);
	return 0;
}
