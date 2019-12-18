//p137_5strcmp.c

#include <stdio.h>
#include <string.h>
main()
{
	int i ,pos, p1,p2,cmp;
	char st[20], st2[20];
	
	printf("***문자형 비교  ***\n");
	printf("문자열 1=> ");
	gets(st);
	printf("문자열 2=> ");
	gets(st2);
	
	strcmp(st, st2);
	pos=strcmp(st, st2);
	
	if(pos==0)
		printf("두 문자열이 동일합니다.");
		
//		
//	printf("***문자형 비교  ***\n");
//	printf("문자열 1=> ");
//	gets(st);
//	printf("문자열 2=> ");
//	gets(st2);
//	
//	p1=strlen(st); p2=strlen(st2);
//	if(p1==p2) {
//		for(i=0;st[i]!=NULL;i++)
//		{
//			cmp=st[i]-st[i];
//			if(cmp!=0) break;
//		}
//		if(cmp==0) printf("\n두 문자열이 동일합니다.\n");
//		else if(cmp>0) printf("\n첫 번째 문자열이 더 큽니다.\n");
//		else printf("\n두 번째 문자열이 더 큽니다.\n");
//	}
//	else if(p1>p2) printf("\n첫 번째 문자열이 더 큽니다.\n");
//	else printf("\n두 번째 문자열이 더 큽니다.\n");
}

