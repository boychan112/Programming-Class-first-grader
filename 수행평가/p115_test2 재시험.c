//반복문 평가(p115_test2_2) 
//문자열 구성 요소 세기
#include <stdio.h>
main()
{
	int i, n, num, big, small, etc;
	char ch;

	num=big=small=etc=0;
	
	
	system ("cls");
	printf ("문자열을 입력하면 종류별로 문자의 개수를 출력합니다.\n");
	printf ("====================================================\n");
	printf ("입력 문자열 =>" );
	n=getche();
	
	

	ch=getche();
	while(ch!=13)
	{
		for(i=1;i<=n;i++);
		ch=getche();
		if(n>1)
		ch=num;
		if(ch=='A'||ch=='Z')
		big=ch;
		if(ch=='a'||ch=='z')
		small=ch;
		
	}
	printf ("----------------------------------------------------\n");
	printf ("숫자 : %d, 대문자 : %d, 소문자 : %d, 기타 : %d ", num, big, small, etc);
	printf ("\n====================================================\n");	
	printf ("다시하겠습니까? (y/n)=> ");	
}
