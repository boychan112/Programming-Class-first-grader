#include <stdio.h>
main()
{
	char S[101];
	int i,c=0, cc=0;
	printf("100자 이내의 문장열을 입력하세요 : \n" );
	scanf("%s", S);
	for(i=0;S[i]!=NULL;i++)
	{
		if(S[i]=='c'||S[i]=='C');
		{
			c++;
			if(S[i+1]=='c'||S[i+1]=='C')
			cc++;
		}
	 } 
	 printf("c의 개수 : %d\n", c);
	 printf("cc의 개수 : %d\n", cc);
}
