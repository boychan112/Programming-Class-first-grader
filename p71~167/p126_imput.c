//점수 입력(p126_imput)
#include <stdio.h>
main()
{
	int i, score[5];
	
	
	printf ("==== 점수입력 ====\n");
	for (i=0;i<5;i++)
	{
		printf ("\n%2d번 점수 => ", i+1);
		scanf("%d", &score[1]);
	}
}
