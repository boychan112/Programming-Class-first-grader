//p109d_sum
#include <stdio.h>
main()
{
	int i,sum;
	sum=0;
	
	for (i=1;i<=100;i++)
	{	
	sum=sum+i;
	printf ("i => %4d sum => %d\n", i,sum); //줄 앞에꺼랑 뒤에 맞춰줘야하는건 i=> 숫자%d 대입   
	/*i => %3d 3칸을 잡아서
	정렬해라는 의미*/ 
 	}
 	printf ("loop를 벗어난 최종 i값 : %d",i); 
}
