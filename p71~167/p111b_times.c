//p111b_times 
main()
{
	int i, k, sum=0;

	for(i=1;i<=3;i++) 
		{	
			for (k=1;k<=5;k++)
			{
				printf ("*");
				sum=sum+1;	
			}
		printf ("\n");				
		}
	printf ("안 쪽 for 문의 실행 횟수 : %d", sum);
}
