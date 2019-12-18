//급여 관리(p_132_salary1) 
#include <stdio.h>
#define NO 20           //총인원 수 
#define DAILY 80000		//일당 
#define FXTRA 15000		//초과 시급 
#define TAX 0.07		//세율(7%) 
#define HEALTH 0.05		//건강보험료(5%) 
#define PENSION 0.06    //국민연금(6%) 
#define FILED			//항목 수  
main()
{
	int n, i, p[NO][FILED];
	
	srand(time(NULL));
	for(n=1;n<=NO;n++)
	{
		p[n][0]=15+rand()%11;
		p[n][1]=rnad()%26;
	}
	
	for(n=1;n<=no;n++)
	{
		p[n][2]=p[n][0]*DAILY;
		p[n][3]=p[n][1]*EXTRA;
		p[n][4]=p[n][2]+p[n][3];
		p[n][5]=p[n][3]*TAX;
		p[n][6]=p[n][4]*HEALTH;
		p[n][7]=p[n][4]*PENSION;
		p[n][8]=p[n][4]-p[n][5]-p[n][6]-p[n][7];
	}
	
	printf("9월 봉급 명세서 \n");
	printf("-------------------------\n");
	printf("사원 근무 초과 임금 초과 급여 세금 건강 국민 최종\n");
	printf("번호 일수 근무 총액 수당 합계 공제 보험 임금 수령액\n");
	printf("------------------\n");
	
	for(n=1;n<NO;n++)
	{
		printf("%2d %2d %2d", n+1, p[n][0],p[n][1]);
		for(i=2;i<FILED;i++)
			printf(" %7d ". p[n][i]);
		printf("\n");
		if((n+1)%5==0)
		printf("-----------------------------------");
	 } 
} 
