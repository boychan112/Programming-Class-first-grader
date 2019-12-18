//test

#include <stdio.h>
#include <time.h>
main()
{
	int i, a[20];
	
	srand(time(NULL));
	for(i=1;i<=20;i++)
	{
		i=1+rand()%100;
	}
	printf("%d",a[i]);
}
