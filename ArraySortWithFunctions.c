#include<stdio.h>
int sort(int *a,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	return a;	
}
int main()
{
	int *p,a[100],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]); //printf("%d ",*p++);
	}
	return 0;
}
