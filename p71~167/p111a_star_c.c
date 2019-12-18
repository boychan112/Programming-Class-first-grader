//(p111a_star_c)
#include <stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=7;i++)
	{
		for(j=7;i<=j;j--)
		{
			printf (" ");
		}
		for(k=1;k<=i;k++)
			printf ("*");
			printf ("\n");
	}
}
