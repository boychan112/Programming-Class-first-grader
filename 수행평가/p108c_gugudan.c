//구구단 출력(p108c_gugudan)
#include <stdio.h>
main()
{
	int i, dan;
	char ch, yes;
	
	do
	{
		printf ("출력할 구구단은? => ");
		ch=getche();
		putchar('\n');
		printf ("======%c단=======\n");
		dan=ch-'0';
		for (i=1;i<=9;i++)
			printf ("%d * %d = %2d\n", dan, i, dan*i);
		printf ("---------------\n");
		printf ("다시 하겠습니까? (Y/N) => ");
		yes=getch();
		putchar ('\n');
	}
	while(yes=='y'||yes=='Y');
}
