//p137_str_insert.c

#include <stdio.h>
#include <string.h>
main()
{
	int i, j, pos;
	char st1[50], st2[20], st3[70];
	
	printf("*** 문자열 삽입 ***\n\n");
	printf("기본 문자열 => ");
		gets(st1);
	printf("삽입할 문자열 => ");
		gets(st2);
	printf("삽입할 위치 => ");
		scanf("%d", &pos); 
		
	for(i=0;i<pos-1;i++)
		st3[i]=st1[i];
	for(i=pos-1;st2[j]!=NULL;i++) 
		st3[i]=st2[j++];
	for(j=pos-1;st1[j]!=NULL;j++) 
		st3[i]=st1[j];
	st3[i]=NULL;
	printf("\n최종 문자열 => %s\n", st3);
	return 0;
}
