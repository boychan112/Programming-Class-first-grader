//login창 만들기(p106d_login)
#include <stdio.h>
main()
{
	char a;
	
	printf ("ID : ");
	a=getche();
	while (a != 13)
		a=getche();
		putchar('\n');
		
	printf ("PASSWD : ");
	a=getch();
	putchar('*');
	while (a != 13)
	{
		a=getch();
		putchar('*');
	}
 } 
