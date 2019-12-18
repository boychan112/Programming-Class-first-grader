//반복문 평가(p115_test2_teacher)
//문자열 구성 요소 세기
#include <stdio.h>
main()
{
	int i, n, num, big, small, etc;
	char ch, yes;
	
	do 
	{
	system ("cls");
	num=big=small=etc=0;	
	
	printf ("문자열을 입력하면 종류별로 문자의 개수를 출력합니다.\n");
	printf ("====================================================\n");
	printf ("입력 문자열 =>" );

		do
		{
			ch=getche();
			if(ch>='0' && ch<='9') 
			num++;
			else if(ch>= 'A' && ch<= 'Z') 
			big++;
			else if(ch>='a' && ch>='z')
			small++;
			else if(ch!=13)
			etc++;
		}while(ch!=13);
		
	printf ("\n----------------------------------------------------");
	printf ("\n숫자 : %d, 대문자 : %d, 소문자 : %d, 기타 : %d ", num, big, small, etc);
	printf ("\n====================================================\n");	
	printf ("다시하겠습니까? (y/n)=> ");
	yes=getche();
	}while(yes=='y'||yes=='Y');
}
