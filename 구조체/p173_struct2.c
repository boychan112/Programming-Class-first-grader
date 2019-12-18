//구조체 배열의 활용(P173_struct2)
//학번, 이름, 점수 레코드 만들기
#include <stdio.h>
#define NO 5
main()
{
	struct student{				//구조체 정의 
		short id;
		char name[9];
		int score;
	};	
	
	struct student class[NO];	//구조체 선언
	int no, i;
	
	srand(time(NULL));
	printf(" *** 데이터 입력 ***\n");
	for(i=0; i<NO; i++) {
		class[i].id= 1100 + i + 1; 				//학번 
		printf("%2d번 이름 = >", i+1);
		scanf("%s", class[i].name); 			//이름 입력
		class[i].score= 40+rand()%61;			//점수 생성
	} 
	
	printf("\n *** 데이터 출력 ***\n");
	for(i=0; i<NO; i++) 
		printf("%4d %-9s %3d\n", class[i].id, class[i].name, class[i].score); 
}
