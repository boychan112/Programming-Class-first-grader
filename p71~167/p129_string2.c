//문자열 입출력(p129_string2)
#include <stdio.h> 
main()
{
	char str[20];
	
	//문자열 입력
	printf ("소속 학교를 입력하시오 => ");
	gets(str); //문자열 전용 입력문
	
	//문자열 출력
	printf ("우리 학교: ");
	puts(str); //문자열 전용 출력문 
} 
