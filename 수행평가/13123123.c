//배열과 포인터 평가(p136_test32) 
#include <stdio.h>
#define NO 12
#define FIELD 5 //원가 (4000~7000원), 소매가 (원가+1000~2000원), 판매량 (50~100개), 판매액 (소매가*판매량), 이윤((소매가+원가)+판매량) 
main() 
{
	int r,c; //r(row 행), c(column,열)
	char *item[NO]={"사과","배","귤","감","딸기","포도","수박",
					"참외","복숭아","토마토","바나나","멜론"};
	int *fruit[NO][FIELD], m_price, max[FIELD]={0};
	int *A[NO], *B[NO], *C[NO], *D[NO];
	
	printf("            수장 청과물 상회 판매 현황\n");
	printf("                                        Sep 20\n");
	printf("=============================================\n");
	printf(" 품목   원가  소매가  판매량  판매액   이윤\n");
	printf("---------------------------------------------\n"); 

	srand(time(NULL));
	//item
	for(c=0;c<NO;c++) {
		printf(" %6s", *(item+c));	
		*(*(fruit+c)+r)=4000+rand()%5000;
		*(A+c)=fruit[c][r]+1000;
		*(B+c)=50+rand()%50;
		*(C+c)=*(A+c)**(B+c);
		*(D+c)=(A[c]+fruit[c][r])+B[c];
		printf(" %3d  %5d %6d     %3d  %3d\n", *(*(fruit+c)+r), *(A+c), *(B+c),*(C+c), *(D+c));
		if((c+1)%5==0) 
			printf("----------------------------------------------\n");
		else if(i+1==NO) 
			printf("==============================================\n"); 
		for(r=0;r<FIELD;r++)
			if(fruit[c][r]>max[r])
			max[r]=fruit[c][r];
			max[r]=*(item+c);
//		for(r=0;r<FIELD;r++)					
	}
	printf("\n---------------------------------------------------\n");
	printf("최고 품목 %s", *(item+c));
	printf("\n===================================================\n"); 
}
