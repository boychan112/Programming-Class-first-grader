//반복문 평가 (p115_test3)
//입력 자료의 합 구하기
#include<stdio.h>
main()
{
	int i, n, num, sum;
	char yes;
	
	
	do 
	{
		system("cls");
		num=0;
		sum=0;	
		printf ("입력 자료의 합을 구합니다.\n");
		printf ("==============================\n");
		printf ("입력할 자료의 개수는(2~9)=> ");
		n=getche()-'0'; 
		printf ("\n------------------------------\n");
		
		do  
		{	num=getch()-'0';
			if(num>=2&&num<=9)
			printf ("%d", num);
			for(i=1;i<=n;i++)
			{
			printf ("\n%2d => ", i);
			scanf ("%d", &num);
			sum=num+sum;
			}
		}while(num<1 || num>10);
		
	printf ("\n\n-----------------------------\n");
	printf ("합계 : %d", sum);
	printf ("\n=============================\n");
	printf ("\n다시 하겠습니까?(y/n)=> " );	
	yes=getche();
	}while(yes=='y'||yes=='Y');
 } 
 
