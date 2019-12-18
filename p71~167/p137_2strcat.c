//p137_2strcat
//string length

#include <stdio.h>
#include <string.h>
main()
{
	char st[20];
	char sr[20];
	printf("*** 문자열의 연결 ***\n\n");
	printf("원본 => ");
		gets(st);
	printf("추가 => ");
		gets(sr);
	printf("전체 => "); 
//	printf("%s", strcat(st,sr));
	printf("%s%s", st,sr);
	
	/*
	int i, pos;
	char st1, st2;
	
	printf("***문자열 연결 ***\n\n);
	printf("원본 => ");
		gets(st1);
	printf("추가 => ");
		gets(st2); 
	pos=strlen(st1);
	for(i=0;st[i]!=NULL;i++)
		st1[pos+i]=st2[i];
	st1[pos+i]=NULL;
	printf("전체 => %s", st1); 
	*/
}
