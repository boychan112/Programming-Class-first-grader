//윤년 판단하기(p161_leap-year2.c) 
#include <stdio.h>
#include <stdbool.h>
main() {
	int year;
	bool leap();
	
	printf("윤년을 판단할 연도를 입력하시오. => ");
	scanf("%d", &year);
	if(leap(year)==true) 
		printf("%d년도는 윤년입니다.\n", year);
	else 
		printf("%d년도는 평년입니다.\n", year);
} 

bool leap(int yr) {
	if(yr%400 == 0) 
		return true;
	else if(yr%4==0 && yr%100!=0) 
		return true;
	else return false;
}
