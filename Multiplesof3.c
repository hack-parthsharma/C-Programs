main()
{
	int a,b;
	printf("Enter a & b:");
	scanf("%d%d",&a,&b);
	do
	{
		if(a%3==0)
		   printf("%d ",a);
		a++;
	}while(a<=b);
}
