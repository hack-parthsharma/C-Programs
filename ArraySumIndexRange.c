#include<stdio.h>

int main()
{
	int a[100],s,n,i,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sum=");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==s && a[i]!=0 && a[j]!=0 && a[i]!=a[j])
			{
				printf("Sum found between indeces %d and %d \n",i,j);
				flag=2;
				break;
			}
			else
				flag=1;
		}
		if(flag==2)
			break;
	}
	if(flag==1)
		printf("Sum not Found");
	
	return 0;
}
