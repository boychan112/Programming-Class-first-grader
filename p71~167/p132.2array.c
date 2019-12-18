//2과목을 배열에 저장(p132.2array)
#include <stdio.h>
#define NO 10
main()
{
	int n, art[NO], pro[NO];
	
	srand(time(NULL));
	for(n=1;n<=NO;n++)
		art[n]=50+rand()%51;
	for(n=1;n<=NO;n++)
		pro[n]=50+rand()%51;
		
	printf("번호 구조 프로\n");
	printf("---------------\n");
	for(n=1;n<=NO;n++)
		printf("%2d => %3d %3d\n", n+1, art[n]);
}
