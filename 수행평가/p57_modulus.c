//나머지 연산자 (p57_modulus.c)
#include <stdio.h>
main()
{
	int sec, min, left;
	
	printf ("초를 입력하시오 : ");
	scanf ("%d", &sec);
	min=sec/60;
	left=sec%60;
	printf ("%d초 => %d분 %d초\n", sec,min,left); 
 } 
