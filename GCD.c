void gcd(int x,int y)
{
	int c;
	while(c=(x%y)!=0)
	{
		x=y;
		y=x;
	}
	printf("GCD=%d",y);
}

main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	gcd(a,b);
}
