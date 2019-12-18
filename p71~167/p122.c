//4.가장 큰수
#include <stdio.h>
main()
{
	int a, i, m1=0, m2=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d", &a);
		if(a%2==1)
			if(m1<a)
				m1=a;
		if(a%2==0)
			if(m2<a)
				m2=a;
	}
	if(m1>0)
		printf("%d ", m1);
	if(m2>0)
		printf("%d ", m2);
	
 } 
