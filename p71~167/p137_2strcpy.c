//p137_2strcpy
//string length

#include <stdio.h>
#include <string.h>
main()
{
	char st[20];
	char sr[20];
	printf("*** 문자열의 복사 ***\n\n");
		printf("원본 => ");
	gets(st);
	printf("사본 => ");
	strcpy(sr, st); //puts(st);
	printf("%s", sr);
}
/*

	int i;
	char st1[20],st2[20];
	
	printf("*** 문자열 복사 ***\n\n");
	printf("원본 => ");
	gets(st1);
	for(i=0;st1[i]!=NULL;i++)
		st2[i]=st1[i];
	st2[i]='\0';
	printf("사본 => "); 
	puts(st2); 
	*/
