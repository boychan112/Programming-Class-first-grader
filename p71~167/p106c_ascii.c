//버퍼가 없는 ASCII code 출력(p106c_ascii)
#include <stdio.h>
main()
{
	char a;
	
	printf ("문자 => ");
	a=getche();
	while (a != 13)
	{
		printf ("\n%c의 ASCII code : %d\n", a, a);
		printf ("=================================\n");
		printf ("문자 => ");
		a=getche(); 
	}
 } 
