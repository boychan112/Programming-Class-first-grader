//p131a_pass
#include <stdio.h>
#include <time.h>
main()
{
	int a,b[20], c=0, d=0;
	
	srand(time(NULL));	
	for (a=1;a<=20;a++)
	{
		b[a]=1+rand()%100;
	}
	
	printf ("==== 점수 출력 ====\n");

	for(a=1;a<=20;a++) 
	{
		printf ("%2d번 점수 => %2d\n", a, b[a]);
		
		if(b[a]>=70)
		{
			c=c+1;
		}
		else 
			d=d+1;
	}
	printf ("합격자는 %d명이고, 불합격은 %d명입니다.", c, d);
}
