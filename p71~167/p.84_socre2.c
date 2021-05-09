//p.84_score2.c
#include <stdio.h>
main()
{
	int score;
	
	printf ("점수를 입력하세요 :");
	scanf ("%d", &score);
	if (score>=60) {
		printf ("합격하셨습니다");
	}
	else {
		printf ("불합격하셨습니다\n");
		printf ("\n남아야겠네요 \n 단무지 많이 가져오세요");
	}
 } 
