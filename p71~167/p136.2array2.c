//2과목을 2차원 배열에 저장(p136.2array2.c)
#include <stdio.h>
#define NO 20
#define SUB 2
main()
{
	int n, score[NO][SUB];
	
	srand(time(NULL));
	for(n=1;n<=NO;n++)
	{
		score[n][0]=50+rand()%51;
		score[n][1]=50+rand()%51;
	}
	
	printf("번호 구조 프로 \n");
	printf("-----------------\n");
	for(n=1;n<=NO;n++)
	printf("%2d => %3d %3d\n", n+1, score[n][0],score[n][1]);
}
