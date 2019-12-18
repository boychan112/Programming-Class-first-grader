//p137_lstrlen
//string length

#include <stdio.h>
main()
{
	int i=0;
	char st[20];
	
	printf("*** 문자열의 길이 ***\n\n");
		printf("문자열 => ");
	gets(st);
	i=strlen(st); //while(st[i]!=NUll) i++
	printf("문자열의 길이 => %d 글자", i); 
}
