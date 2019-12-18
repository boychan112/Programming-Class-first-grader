//(p111a_star_d)
main()
{
	int i,j,k;
	
	for(i=1;i<=4;i++)
	{
		for(j=5;i<=j;j--)
		{
			printf (" ");
		}
		for(k=1;k<=i;k++)
			if(k != 1)
			{
				printf ("**");
			}
			else 
			{
				printf ("*");
			}
			printf ("\n");
	}
}
