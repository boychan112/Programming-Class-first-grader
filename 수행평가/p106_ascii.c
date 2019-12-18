//버퍼가 없는 ASCII code 출력()
#include <stdio.h>
main()
{
	char ch;
	
	printf ("문자 = > ");
	ch=getch();
	while (ch != 13)
	{
		printf ("\n%c의 ASCII code : %d\n", ch, ch);
		printf ("=======================\n");
		printf ("문자 = > ");
		ch=getche();
	}
 } 
