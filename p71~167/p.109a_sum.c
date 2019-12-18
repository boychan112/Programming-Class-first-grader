//합 구하기 (p109a_sum) 
#include <stdio.h>
main()
{
	int i,sum;
	sum=0;
	
	for (i=1;i<=100;i++)
		sum=sum+i;
	printf ("결과 : %d",sum);
}
