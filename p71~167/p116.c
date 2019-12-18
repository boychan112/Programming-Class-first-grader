//1. 구간의 수  
#include <stdio.h>
main()
{
	int a, b, temp=0, i;
	printf ("***두 수 구간의 숫자 출력하기*\n");
	printf ("두 수를 입력하세요 :");
	scanf ("%d %d", &a, &b);
	
	if(a<b) 
	{
	for(i=a;i<=b;i++)
	{
		printf ("%d ", i);
	}
	printf ("\n");
	}
	
	if(a>b)
	{
	for(i=b;i<=a;i++)
	{
		printf ("%d ", i);
	}
	printf ("\n");
	}
}
