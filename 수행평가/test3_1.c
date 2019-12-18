//test3_1
#include<stdio.h>
main()
{
	int i, n, num, sum;
	char ch;
	
	do {
		system("cls");
		printf ("입력 자료의 합을 구합니다\n");
		printf ("===============================\n");
		sum=0;
		printf ("입력할 자료의 개수는 (2~9)=> ");
		do {
			num=getch()-'0';
			if(num>=2&&num<=9)
				printf ("%d", num);
		}while(num<2||num>9);
		printf ("\n----------------------\n");
		for(i=1;i<=num;i++)
		{
			printf ("%d => ", i);
			scanf ("%d", &n);
			sum=sum+n;
		}
			
		printf ("합계 : %d", sum);
		printf ("\n=============================\n");
		printf ("\n다시 하겠습니까?(y/n)=> " );	
		ch=getche();
		}while(ch=='y'||ch=='Y');
	}
 
