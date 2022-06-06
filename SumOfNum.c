main()
{
	int sum=0,a,b,i=0,temp;
	printf("Enter a & b:");
	scanf("%d%d",&a,&b);
	/*if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}*/
	while(a<b)
	{
		if(a%2==0)
		{
		  sum=sum+a;
		}
		a++;
	}
	printf("SUM=%d",sum);
}
