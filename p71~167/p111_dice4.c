//주사위 게임-4(p111_dice4)
#include <stdio.h> 
main()
{
	int i, n;
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
			if(n<1||n>10)
				printf("잘못 입력하였습니다. \n\n"); 
		}
		while(n<1||n>10);
		
		printf("\n===================================");
		for(i=1;i<n;i++)
			{	
				printf("\n%d번 주사위를 던지세요(스페이스바 입력): ", i);
				getch();
				printf(" %d\n", 1+rand()%6);
			}	
		printf("\n====================================");
		
		printf("\n다시 하겠습니까?(y/n) => ");
		yes=getche(); 
		putchar('\n');
	}while(yes=='y'||yes=='Y');
}
