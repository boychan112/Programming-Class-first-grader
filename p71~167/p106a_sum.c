//1~100까지의 합(p106a_sum)
#include<stdio.h> 
main()
{
	int a, sum=0;
	
	a=1;
	while(a<=100)
	{
		sum=sum+a;
		a++;
	}
	printf("결과=%d", sum);
}
