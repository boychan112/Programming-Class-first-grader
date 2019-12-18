//(p111e_gugudan)
#include <stdio.h>
main()
{
	int i, j;
	
	for(i=1;i<=9;i++)
	{
		printf ("=====%d단======\n", i);
		printf ("\n"); 
		for(j=1;j<=9;j++)
			printf ("%d * %d => %d\n", i, j, i*j);
	printf ("\n"); /*단과 단 사이에 공백을 추가해줌*/ 
	}
	
}
