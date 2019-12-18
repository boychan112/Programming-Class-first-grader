//p109h_random
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b;
	srand(time(NULL));
	
	for(a=1;a<=50;a++)
	{
		printf("%d ==> %d\n", a,b);
		b=50+rand()%100;
	}
	return 0;
}
