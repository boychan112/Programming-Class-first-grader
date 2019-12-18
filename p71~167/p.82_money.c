//p.82_money.c
#include <stdio.h>
main()
{
	int m,b,r;
	printf ("책을 구입하시겠습니까?"); 
	scanf ("%d",&b);
	
	if (m>=b){
		r=m-b;
		printf ("구입했습니다. 남은 돈은 %d입니다.",r );
	}
	else {
		printf ("용돈이 부족합니다.");
		printf ("부족한 금액은 : %d", r);
	}
	return 0;
}
