//2과목을 2차원 배열에 저장(p136.2array4.c)
#include <stdio.h>
#include <time.h>
#define NO 20	//학생 수 
#define SUB 7 //과목 수  
main()
{
	int n,s, score[NO][SUB], sum, min[SUB]={100}, max[SUB]={0,}; //행, 열 
	float avg=0; 
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
	{
		for(s=0;s<SUB;s++)
			score[n][s]=60+rand()%41;
	}
	printf("┌------------------------------------------------------┐\n");
	printf("│  번호  국어 영어 수학 사회 과학 구조 프로 총점 평균  │\n");
	//개인 
	for(n=0;n<NO;n++)
	{
		sum=0;
		if(n%5==0) 
			printf("│ -----------------------------------------------------│\n");
		printf("│  %2d =>", n+1);
		
		for(s=0;s<SUB;s++)
		{
			printf("%4d ",score[n][s]);
			sum=sum+score[n][s];
		}
		printf(" %3d",sum);
		printf(" %6.2f",sum/7.0);
		printf(" │\n"); 
	}
	
	printf("└------------------------------------------------------┘\n");
	printf("┌---------------------------------------------------┐\n");
	printf("│  총점 :  국어  영어  수학  사회  과학  구조  프로 │\n");
	printf("│---------------------------------------------------│\n"); 
	printf("│  계산 : ");
	 //과목 
	for(s=0;s<SUB;s++)
	{	 
		max[s]=0;
		min[s]=100;
		sum=0;
		for(n=0;n<NO;n++)
		{
			sum=sum+score[s][n];	
			score[7][1]=sum;
			
			if(max[s]<score[n][s])
				max[s]=score[n][s];
			if(min[s]>score[s][n])
				min[s]=score[s][n];
		}
	printf("%d ",sum);    
	printf("%f",(float)sum/7.0); 
	}
	printf("│");
	printf("\n"); 
	printf("│---------------------------------------------------│\n"); 
	printf("│  평균		\n"                                        );
	printf("│-------------------------------------------------------------------------------------------------------│\n");
	
	printf("┌------------------------------------------------------┐\n");
	printf("│  최댓값 %d\n",max);                                  
	printf("│------------------------------------------------------│\n");
	printf("│  최솟값		%d\n",min                                        );
	printf("└------------------------------------------------------┘\n"); 
}
