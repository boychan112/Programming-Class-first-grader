//무조건 이동(p115_goto)
#include <stdio.h>
main()
{
	int i, j;
	
	for(i=1;i<=3;i++)
		for(j=1;j<=5;j++)
		{
		printf("%d * %d = %d\n", i, j, i*j);
		goto exit;
		}
	exit: printf("The End");//label (라벨) 
 } 
