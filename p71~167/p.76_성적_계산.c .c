//p.76_성적_계산.c 
#include <stdio.h>
main()
{
	float a,b,c;
	int  d,e,f;
	float s;
	
	printf ("***과목별 점수 계산 프로그램***\n");
	printf ("중간고사 반영비율/받은 점수를 입력하세요: ");
	scanf ("%f %d", &a,&d);
	printf ("기말고사 반영비율/받은 점수를 입력하세요: ");
	scanf ("%f %d", &b,&e);
	printf ("수행평가 반영비율/받은 점수를 입력하세요: ");
	scanf ("%f %d", &c,&f);
	s=(a*d)+(b*e)+(c*f);
	printf ("점수는 %.1f 입니다.\n", s);
}
