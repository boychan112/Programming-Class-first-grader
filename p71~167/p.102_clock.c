//p102_clock
main()
{
	int hour, min;
	printf ("시간과 분을 입력하세요: ");
	scanf ("%d %d", &hour, &min);
	printf ("입력한 시간의 30분 전 시간은 ");
	
	if (min>=30)  
		printf("%d시 %d분\n", hour, min-30);
	else 
	{
		if (hour==0)
			printf ("%d시 %d분\n",hour+23, min+30);
		else 
			printf ("%d시 %d분\n",hour-1, min+30);
	}
 } 
