//반복문, 난수, 1차원 배열 평가(p132_1test1)
//1. 30~100 사이의 난수 20개를 배열에 저장
//2. 응시생 총점, 평균(소수 둘째자리까지)
//3., 최고점, 최하점
//4. 합격자(60점 이상) 및 불합격자  

#include <stdio.h>
#include <time.h>
main()
{
	int i, score[20], sum, pno, no=0, max, min; 
	float avg; 
	
	srand(time(NULL));
	printf ("*********************************\n");
	printf ("* 컴퓨터 활용능력 자격검정 결과 *\n");
	printf ("*********************************\n");
	
	for (i=1;i<=20;i++)
	{
		score[i]=30+rand()%71;
	} 
	
	printf ("\n========== 응시자 점수 ==========\n");
	for (i=1;i<=20;i++) 
	{
		printf ("%2d => %d\n", i, score[i]);
		if (i%5==0)
		{
			printf ("---------------------------------\n");	
		}
		if (max<=score[i])
			max=score[i];
		if (min>score[i])
			min=score[i];
			
		sum=score[i]+sum;
		avg=(float)sum/20;
		
		if (score[i]>=60) 
		{
			pno=pno+1;
		}
		else
			no=no+1;
	}
	printf ("\n========== 응시자 통계 ==========\n");
	printf ("총 점  : %2d점 \n평 균  : %2.2f점",sum, avg);
	printf ("\n---------------------------------\n");
	printf ("최고점 : %2d점 \n최하점 : %2d점",max, min); 
	printf ("\n---------------------------------\n");
	printf ("합  격 : %2d명 \n불합격 : %2d명",pno, no);   
 }   
