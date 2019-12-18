//중첩 for문으로 별표 출력(p111a_star_a)
#include <stdio.h>
main()
{
	int s, b;
	
	for(s=1;s<=7;s++)
	{
		for(b=1;b<=s;b++)
			printf ("*");
			printf ("\n"); 
	}
	
}
