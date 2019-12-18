//p.71_scorer.c
#include <stdio.h>
main()
{
	int kor, eng, mat,sum ;
	float avg;
	
	printf ("국어,영어,수학 성적을 입력하시오.");	
	scanf ("%d %d %d", &kor, &eng, &mat);
	sum=kor+eng+mat;
	avg=(float)sum/3;
	printf ("------------------------\n");
    printf ("총점: %d\n", sum);
	printf ("평균: %.2f", avg);
}
