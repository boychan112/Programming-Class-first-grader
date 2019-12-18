//2차원 배열의 포인터 활용(p136_pointer32)
#include <stdio.h>
#define NO 20 //학생 수
#define SUB 7 //과목 수
main()
{
	int n, s, score[NO][SUB], sum[NO], sub_sum[SUB]={0,}, sub_max[SUB], sub_min[SUB];
	// 인덱스     점수 			총점	과목 총점	  과목별 최고 	과목별 최하 
	float avg[NO], sub_avg[SUB];
	//     평균		과목 평균 
	
	srand(time(NULL));
	
	//개인별 통계
	for(n=0;n<NO;n++)
	{
		*(sum+n)=0;					//개인별 총점 초기화 
		for(s=0;s<SUB;s++)
		{
			*(*(score+n)+s)=60+rand()%41;	//점수(난수) 저장 score[n][s]=60+rand()%41;
			*(sum+n)+=*(*(score+n)+s);		//개인별 총점 sum[n]+=score[n][s];
		}
		*(avg+n)=(float)(*(sum+n))/SUB;		//개인별 평균 avg[n]=(float)sum[n]/SUB;
	 } 
	
	//과목별 통계
	for(s=0;s<SUB;s++)
	{
//		*(sub_sum+s)=* 
		*(sub_max+s)=0;
		*(sub_min+s)=100;
		*(sub_max+s)=*(*(score+0)+1);
		for(n=1;n<NO;n++)
		{
			*(sub_sum+s)+=*(*(score+n)+s);
			if(*(sub_max+s) < *(*(score+n)+s)) 
				*(sub_max+s)=*(*(score+n)+s);
			if(*(sub_min+s) > *(*(score+n)+s)) 
				*(sub_min+s)=*(*(score+n)+s);
		}
		*(sub_avg+s)=(float)(*(sub_sum+s))/NO;
	}
 
 	printf("=======================================================================\n");
 	printf("번호      국어   영어   수학   사회   과학   구조   프로   총점   평균\n");
	printf("=======================================================================\n");
	
	for(n=0;n<NO;n++)
	{
		printf(" %2d  =>", n+1);
		for(s=0;s<SUB;s++)
			printf("   %3d ", *(*(score+n)+s));
			printf("   %3d    %.1f", *(sum+n), *(avg+n));
			printf("\n");
	 	if((n+1)%5==0)
	 		printf("-----------------------------------------------------------------------\n");
	 }
	 
	printf(" 총점");
	for(s=0;s<SUB;s++)
	 	printf("  %4d ", *(sub_sum+s));
	printf("\n 평균");
	for(s=0;s<SUB;s++)
		printf("  %.2f ", (*(sub_sum+s))/20.0); //sub[s]/20.0
	printf("  %.2f ", *(sub_avg+s));
	printf("\n=======================================================================\n");
	printf(" 최고");
	for(s=0;s<SUB;s++)
		printf(" %3d ", *(sub_max+s)); //sub_max[s]
	printf("\n 최하");
	for(s=0;s<SUB;s++)
		printf(" %3d ", *(sub_min+s));	//sub_min[s]
	printf("\n=======================================================================\n");
} 
