//반복부분 제어(p115_number)
#include <stdio.h>
main()
{
	int num;
	
	while(1) 
	{
		printf ("숫자를 입력하세요 => ");
		scanf("%d", &num);
		if (num<=0) break;
		if (num==0) continue;
		if (num%2 == 1)
			printf ("홀수입니다.\n");
		else
			printf ("짝수입니다.\n");
	}	
 } 
