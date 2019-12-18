//별표 출력(p111a-star_d_teacher)
#include <stdio.h>
main()
{
	int i, j, spc;
	char star = '*', space=' ';
	
	for (i=1; i<=7; i+=2)
	{
		spc=(7-i)/2;
		for(j=1; j<=spc; j++) 
			putchar(space);
			 	for(j=1; j<=i; j++)
			 		putchar(star);
	putchar('\n'); 		
	}
 } 
