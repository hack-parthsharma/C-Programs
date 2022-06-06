main()
{
	int a[100][100],i,j,r,c;
	printf("Enter Rows & Colomns:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);	
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<=j)//Lower triangluar Matrix ::(i<=j)  &&  Upper triangluar Matrix ::(i>=j) 
			{
				printf("%d ",a[i][j]);
			}
			else
				printf("0 ");
		}
		printf("\n");
	}
}

