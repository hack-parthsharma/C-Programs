int dist(int x1,int y1,int y2,int x2)
{
	return(sqrt((pow((x2-x1),2))+(pow((y2-y1),2))));
}
main()
{
	int x1,y1,x2,y2,d;
	printf("Enter Point-1: ");
	scanf("%d%d",&x1,&y1);
	printf("Enter Point-2: ");
	scanf("%d%d",&x2,&y2);
	d=dist(x1,y1,x2,y2);
	printf("Distance Betweeen Two Points Is: %d",d);
	
}

