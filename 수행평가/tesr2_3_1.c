//#include <stdio.h>
////1. 40~100 사이의 난수를 2차원 배열에 저장
////2. 개인별 => 점수, 총점, 평균, 판정(평균 10점마다 '*'표시)
////3. 과목별 => 총점, 평균;
////4. 과목별 => 최고점수 1명씩 장학급 지급 대상자 선발 
//#define NO 20 //학생수
//#define SUB 5 //교과목수 
//main()
//{
//	int n, i, star;  
//	int s[NO][SUB];	//개인별 성적  
//	int sum[NO]={0}; //개인별 총점 
//	int s_sum[SUB]={0};  //과목별 총점  
//	int max[SUB], max_no[SUB]; //과목별 최고점수, 학생번호 
//	float avg[NO]; //개인별 평균
//	
//	srand(time(NULL));
//	for(n=0;n<NO;n++)
//	{
//		s=40+rand%100;
//	} 
//	
//	for(n=0;n<NO;n++)
//	{
//		
//	}
//	
//	printf("\n=========================================\n");
//	printf("번호 국어 영어 수학 사회 과학 총점 평균 성취수");
//	printf("-------------------------------------------------\n");
//	printf("과목총점 %d",s_sum[s]);
//	printf("과목평균 %d", avg[s]);
//	printf("장 학 생 %d", ); 
//}
#include <stdio.h>
#include <time.h>
#define NO 20	//학생 수 
#define SUB 5 //과목 수  
main()
{
	int n,s, score[NO][SUB], sum,  max[SUB]={0,}, max_no[SUB];//행, 열 
	float avg=0; 
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
	{
		for(s=0;s<SUB;s++)
			score[n][s]=40+rand()%60;
	}
	printf("-----------------------------------------------------------------\n");
	printf("  번호  국어   영어   수학   사회   과학    총점  평균    성취수준  \n");
	//개인 
	for(n=0;n<NO;n++)
	{
		sum=0;
		if(n%5==0) 
			printf("-----------------------------------------------------------------\n");
		printf("   %2d ", n+1);
	
		
		for(s=0;s<SUB;s++)
		{
			printf(" %4d  ",score[n][s]);
			sum=sum+score[n][s];
		}
		printf("  %4d",sum);
		avg=sum/5;
//		printf(" %6.2f",sum/7.0);
		printf(" %6.1f", avg);
		if(avg>=80||avg<50)
		printf("     ********");
		else if(avg>=70||avg<50)
		printf("     *******");
	else if(avg>=60||avg<40)
		printf("     ******");
		else if(avg>=50||avg<20)
		printf("     *****");
		printf(" \n"); 
	}
	
	printf("--------------------------------------------------------\n");
	printf("--------------------------------------\n");
	printf("  과목총점 : ");
	 //과목 
	for(s=0;s<SUB;s++)
	{	 
		max[s]=0;
		sum=0;
		for(n=0;n<NO;n++)
		{
			sum=sum+score[s][n];	
			score[s][1]=sum;
			
		}
	printf("%d ",sum); 
	}

	printf("\n  과목평균 : ");
	for(s=0;s<SUB;s++)
	{	 
		sum=0;
		for(n=0;n<NO;n++)
		{
		sum=sum+score[s][n];	
			score[s][1]=sum;
		}
	avg=sum/5.0; 
	printf("% 2.1f",avg); 
	} 
	printf("\n  장 학 생 : ");
	for(s=0;s<SUB;s++)
	{	 
		max[s]=0;
		sum=0;
		for(n=0;n<NO;n++)
		{
		sum=sum+score[s][n];	
			score[n][1]=sum;
			
		if(max[s]<score[n][s])
		max[s]=score[n][s];
		max_no[s]=n+1;
		}
	printf("%d ",max_no[s] ) ;
	}
	
//		printf(" 3번, 11번 5번, 9번, 12번, 3번");	
}
