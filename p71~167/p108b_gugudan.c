//p108b_gugudan
#include <stdio.h>
main()
{
	int i, dan;
	char ch;
	
	printf ("출력할 구구단은 => ");
	ch=getche();
	putchar('\n');
	
	printf("== %c단==\n", ch);
	dan=ch-'0'; //아스키 코드를 정수값으로 변환; 
	for(i=1; i<=9 ; i++)
		printf ("%d * %d = %2d\n", dan, i, dan*i);
}
