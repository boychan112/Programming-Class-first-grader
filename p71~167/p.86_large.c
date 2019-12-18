//3항 연산(p86_large)
#include <stdio.h>
main()
{
	int su1, su2, big;
	
	printf ("두 수를 입력하면, 큰 수를 찾습니다. =>");
	scanf ("%d %d", &su1, &su2);
	//big=(su1>su2) ? su1:su2;
	
	if (su1>su2) {
		printf ("큰 수%d 입니다",su1);
	}
	else {	
		printf ("큰 수%d 입니다",su2);
	}
	return 0;
 } 
