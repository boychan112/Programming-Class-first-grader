//반복 부분의 나머지 부분 생략(p115_continue)
#include <stdio.h>
main()
{
	int i, sum=0;
	
	for (i=1;i<10; i++)
	{
		if(i%2==0) continue;
		printf ("%d ", i);
		sum=sum+1;
	}
	printf ("\n1~10까지의 홀수의 합 : %d \n", sum);
 } 
