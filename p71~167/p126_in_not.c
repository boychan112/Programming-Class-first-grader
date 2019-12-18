//정수 입.출력(p126_in_not) 
#include <stdio.h>
main()
{
	int i, score[5];
	
	
	printf ("==== 점수입력 ====\n");
	for (i=0;i<5;i++)
	{
		printf ("\n%2d번 점수 => ", i+1);
		scanf ("%d", &score[i]);
	}
	
	printf ("\n==== 점수출력 ====\n");
	for (i=0;i<5;i++)
	{
		printf ("\n%2d번 점수 => %3d\n", i+1, score[i]);
	}	
		
	
}
