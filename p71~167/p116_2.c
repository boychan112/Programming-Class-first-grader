//1. 구간의 수  
#include <stdio.h>
main()
{
	int a, b, temp, i;
	printf ("***두 수 구간의 숫자 출력하기*\n");
	printf ("두 수를 입력하세요 :");
	scanf ("%d %d", &a, &b);
	
	if(a>b)
	{
		a=temp;
		a=b;
		b=temp;
	}
	for(i=a;i<=b;i++)
		printf ("%d ", i);
	printf ("\n");
	

}
