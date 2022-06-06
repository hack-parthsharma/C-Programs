int DigitalSum(int n)
{
	if(n==0)	
		return 0;
	else if(n==1)
		return 1;
	else
	{
		return(n%10+DigitalSum(n/10));
	}
}

main()
{
	int i,j,n,d;
	scanf("%d",&n);
	d=DigitalSum(n);
	if(d>=10)
		d=DigitalSum(d);
	printf("Digital Sum:%d",d);
}
