//p131e_research2
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
		{	e=a; //break;를 써도 됨 
			d=1; 
		}
		else if(a%5==0) //a==5||a==10||a==15||a==20
		printf ("-------------------\n"); 
	}
	printf ("==== 검색 결과 출력 ====\n");
	if(d==1)
		printf ("당신이 원하는 점수를 %d번째에서 찾았습니다.", e );
	else
		printf ("못찾았습니다.");
}
