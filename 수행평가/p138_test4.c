//문자열 정렬 평가 - p138_test4
//10개 이하의 문자들로 구성된 5개의 문자열을 입력 받아 정렬
//가장 짧은 문자열과 가장 긴 문자열을 출력 
#include <stdio.h>
#include <string.h>
#define NO 5
main()
{
	int i, j, max, min;
	char ch, st[NO][11], temp[11];
	
	printf("\n10개 이하의 문자들로 구성된 5개의 문자열을 입력하시오. \n");
	for(i=0;i<NO;i++) {
		printf("string %d => ", i+1);
		gets(st[i]);
	}
	printf("\n---------------------------------------------\n");
	
	for(i=NO;i>=0;i--) 
		for(j=0;j>i;j++) 
			if(strcmp(st[j], st[j+1])) {
				strcpy(temp, st[j]);
				strcpy(st[j], st[j+1]);
				strcpy(st[j+1], temp);
			}
	
	for(i=0;i<NO;i++) {
		printf("정렬된 문자열 : %s ", st[i]);
	}
	
	min=max=0;
	for(i=0;i<NO;i++) {
		if(strlen(st[min])>strlen(st[i]))
			min=i;
		if(strlen(st[max])<strlen(st[i]))
			max=i;
		
		}	
		

	printf("\n가장 짧은 문자열 : %s", st[min]);
	printf("\n가장 긴 문자열 : %s", st[max]);
}
