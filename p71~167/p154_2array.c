//2차원 배열과 함수 - 5과목의 총점 평균 구하기 p154_2array
#include <stdio.h>
#define NO 20
#define SUB 1

void total(int(*s)[SUB], int *t) {
	int no, subject;
	
	for(no=0;no<NO;no++) 
		for(subject=0;subject<SUB;subject++)
			t[no]+=s[no][subject];		
}


void rank(int *t, int *r) {
	int i,j;
	
	for(i=0;i<NO;i++) 
		*(r+i)=1;
	for(i=0;i<NO-1;i++)
		for(j=i+1;j<NO;j++)
			if(*(t+i)>*(t+j))	
				(*(r+j))++;
			else(*(r+i))++;
}
main() { 
	int n,s, score[NO][SUB], tot[NO]={0}, rnk[NO];
	float avg[NO];
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
		for(s=0;s<SUB;s++)
			score[n][s]=50+rand()%51;
//	total(score, tot); //score 미지수(행과 열에 대한 정보가 없음으로 해결하기 위해 함수를 사용), tot 1차원 배열 
	rank(score, rnk);
	for(n=0;n<NO;n++) {
		printf("  %2d번=> ", n+1);
		for(s=0;s<SUB;s++) 
			printf("  %3d점: ", score[n][s]);
			printf("%2d등\n", rnk[n]);
			if((n+1)%5==0)
				printf("--------------------------------------------------\n");
	}
}


