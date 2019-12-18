//p96_fate
#include <stdio.h>
main()
{
	int y,m,d,r;
	printf ("당신의 사주를 봐드립니다.\n 연도, 월, 일을 차례대로 입력하세요. : ");
	scanf ("%d %d %d", &y, &m, &d);
	r=y-m+d;
	if (r%10==0)
		printf ("당신의 사주는 대박입니다\n");
	else
		printf ("당신의 사주는 그럭저럭입니다\n");
}
