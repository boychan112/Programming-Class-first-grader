//p111_dice5
#include <stdio.h> 
main()
{
	int i, n, c, big, score;
	char yes;
	
	srand(time(NULL));
	system("color 47");
	do
	{
		system("cls");
		do
		{
			printf("몇명이 게임을 합니까?(2~9) => ");
			n=getche()-'0';
			putchar('\n');
			if(n<2||n>9){
				printf("잘못 입력하였습니다. \n\n");
			}
		}
		while(n<2||n>9);
		
		printf("\n===================================");
		printf("\n1번 주사위를 던지세요(스페이스바 입력) : ");
		getch();
		c=1;
		big=1+rand()%6;
		printf("% d\n", big);
		for(i=2;i<=n;i++)
			{
				printf("\n%d번 주사위를 던지세요(스페이스바 입력): ", score);
				getch();
				score=big;
				printf(" %d\n", i);
				if(score>big);
				{
				big=score;
				c=i;
				}
			}	
		printf("\n====================================");
		printf("\n승자 번호 : %d, 승자 점수 : %d\n", c, big);
		printf("\n====================================");
		printf("\n다시 하겠습니까?(y/n) => ");
		yes=getche(); 
		putchar('\n');
	}while(yes=='y');
	
	
	
	
}
