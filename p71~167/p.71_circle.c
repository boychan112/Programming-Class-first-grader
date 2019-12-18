//p.71_circle.c
#include <stdio.h>
int main()
{
	int r;
	float l, s;
	float pie= 3.14;
	
	printf ("원의 반지름을 입력하시오. =>");	
	scanf ("%d",&r);
	printf ("-----------------------------\n");
	l = 2*pie*r;
	s = pie*r*r;
	printf ("원의 둘레는 %7.2f입니다\n",l); 
	printf ("원의 넓이는 %.2e입니다\n",s);
	printf ("============================\n");
	
	
}
