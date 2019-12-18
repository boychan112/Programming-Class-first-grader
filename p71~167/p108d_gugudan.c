//p108d_gugudan
#include <stdio.h>
main()
{
	int i, dan;
	char ch, yes;
	
	do 
	{
		system("cls");//clear screen, system("cls"가 있으면 마지막 putchar('\n') 쓸모없다.
		do
		{
			  
			printf ("출력할 구구단은(1~9) => ");
			ch=getche();  
			putchar('\n');
			if (ch<'1' || ch>'9')
				printf ("잘못 입력하였습니다. \n\n");
		}	
		while(ch<'1' || ch>'9');
		
		printf ("=====%c단 =====\n", ch);
		dan=ch-'0';
		for(i=1;i<=9;i++)
			printf ("%d * %d = %2d\n", dan, i, dan*i);
		printf ("-----------\n");
		printf ("다시 하겠습니까? (y/n) => ");
		yes=getche();
		putchar('\n'); 
	}
	while(yes=='y'|| yes=='Y');
}
