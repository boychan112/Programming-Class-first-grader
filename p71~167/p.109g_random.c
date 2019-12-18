//p109g_random
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,b;
	srand(time(NULL));
	
	for(a=1;a<=20;a++)
	{
		printf("%d ==> %d\n", a,b);
		b=1+rand()%20;
	}
	return 0;
}
