//research
#include <stdio.h>
#include <string.h>
main()
{
	int i, j, n1, n2, pos, sum=0; //n1, n2는 두 문자열의 길이 
	char st1[50], st2[20], st3[70]; //기본 문자열과 검색할 문자열  
	
	printf("*** 문자열 검색 ***\n\n");
	printf("기본 문자열 => ");
	gets(st1);
	printf("검색할 문자열 => ");
	gets(st2);
	
	n1=strlen(st1), n2=strlen(st2);
	for(i=0;i<=n1-n2+1;i++) //검색 시작점 찾는 것 
	{
		pos=i;
		for(j=0;j<n2;j++)
			if(st1[pos]!=st2[j]) //일치하지 않는다면 시작 위치를 하나씩 밀려간다.  
				break;
				else pos++;
		if(j==n2) { //검색한 j와 검색할 문자 n2가 같다면  
			sum++;
			i=i+strlen(st2);
		}
	}
	
	printf("\n기본 문자열에 \"%s\"가(이) %d번 포함되었습니다. \n", st2, sum);
	
}
