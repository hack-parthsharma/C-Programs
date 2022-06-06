int sumoffactores(int n)
{
	int i,sum=0;
	for(i=0;i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return sum;
}
main()
{
	int m,n;
	scanf("%d%d",&n,&m);
	if(((sumoffactores(m))==n)&&((sumoffactores(n))==m))
		printf("\nAmicable Pairs");
	else
		printf("\nNot Amicable Pairs");
}
