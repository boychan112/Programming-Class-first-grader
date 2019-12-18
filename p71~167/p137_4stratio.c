//p137_4stratioi

#include <stdio.h>
#include <string.h>
main() 
{
	int i, st2;
	char st[20];
	
	printf("** 숫자형 문자열 정수 변환 ***\n");
	printf("숫자형 문자열 => ");
	gets(st);
	printf("정수 => ");
	st2=atoi(st);
	printf("%d\n", st2);	
	
	/*
	int i, num=0;
	char st[20];
	
	printf("** 숫자형 문자열 정수 변환 ***\n");
	printf("숫자형 문자열 => ");
	gets(st);
	
	for(i=0;st[i]>='0'&&st[i]<='9';i++)
		num=num*10+(st[i]-'0');
	printf("정수 => %d ", num);
	*/	
}
