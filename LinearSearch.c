main()
{
	int n,i,j,a[100],temp,key;
	scanf("%d",&n);
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(key==a[i])
			printf("Found at :%d",i);
	}
}
