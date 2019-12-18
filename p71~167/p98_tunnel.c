//p98_tunnel
#include <stdio.h>
main()
{
	int a,b,c;
	printf ("세 터널의 높이를 차례대로 입력하세요. : ");
	scanf ("%d %d %d", &a,&b,&c);
	
	if (a<=170)
		printf ("충돌 %d", a);
	else if (b<=170) 
		printf ("충돌 %d", b); 
	else if (c<=170)
		printf ("충돌 %d", c);
	else
		printf ("무사 통과");
}
