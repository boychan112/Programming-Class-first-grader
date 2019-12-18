//ASCII code 출력(p106b_ascii)
#include <stdio.h>
main()
{
	char a;
	
	printf ("문자 = > ");
	a=getchar();
	while(a !=EOF)
	{
		getchar();
		printf("%c의 ASCII code : %d\n", a, a);
		printf ("문자 = > ");
		a=getchar(); 
	} 
 } 
