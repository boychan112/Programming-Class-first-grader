//원하는 점수 찾기(p131e_research1)
#include <stdio.h>
#include <time.h>
main()
{
	int a,b[20], c, d=0, e;
	
	srand(time(NULL));	
	

	for (a=1;a<=20;a++)
	{
		b[a]=1+rand()%100;
	}   
		printf ("당신이 원하는 점수는 => ");
		scanf ("%d", &c); 
	
	printf ("==== 점수 출력 ====\n");
	
	for(a=1;a<=20;a++) 
	{
		printf ("%2d번 점수 => %2d\n", a, b[a]);	
		if (c==b[a])
		{	e=a;
			d=1;
		}
	}
	printf ("==== 검색 결과 출력 ====\n");
	if(d==1)
		printf ("당신이 원하는 점수를 %d번째에서 찾았습니다.", e );
	else
		printf ("못찾았습니다.");
}	
