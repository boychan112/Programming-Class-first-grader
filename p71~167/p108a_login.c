//p108a_login
#include <stdio.h>
main()
{
	char a;
	
	printf ("ID : ");	
	do 
	{
		a=getche();
	}	
		while(a != 13);
		putchar('\n');		
	
	printf ("PASSWORD : ");
	do 
	{
		a=getch();
		putchar('*');
	}	
		while(a != 13);
}
