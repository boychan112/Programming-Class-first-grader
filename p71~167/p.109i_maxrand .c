//p109i_maxrand 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a,y,big=0; 
	srand(time(NULL));
	

	for(a=1;a<=20;a++)
	{
		y=1+rand()%100;
		printf ("%2d => %3d\n",a,y);
		if(big<y)
			big=y;
	}
	printf ("가장 큰 난수  : %d",big);
	return 0;
 } 
