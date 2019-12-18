//2과목을 2차원 배열에 저장(p136.2array3.c)
#include <stdio.h>
#define NO 20	//학생 수 
#define SUB 7 //과목 수  
main()
{
	int n,s, score[NO][SUB]; //행, 열  
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
	{
		for(s=0;s<SUB;s++)
			score[n][s]=60+rand()%41;
	}
	printf("┌------------------------------------------┐\n");
	printf("│ 번호  국어 영어 수학 사회 과학 구조 프로 │\n");
	printf("│ -----------------------------------------│\n");
	for(n=0;n<NO;n++)
	{
		printf("│ %2d =>", n+1);
		for(s=0;s<SUB;s++)
			printf("%4d ",score[n][s]);
			printf(" │\n"); 
	}
	printf("└ -----------------------------------------┘\n"); 
}
