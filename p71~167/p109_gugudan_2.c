//p109_gugudan_2
#include <stdio.h>
main()
{
	int a,b,c; 
	printf ("출력할 구구단은? ");
	
	scanf ("%d", &a);	
	if (a<=9 && a>0)
	
	for (b=1;b<=9;b++)
	{
		c=a*b;
		printf ("%d x %d = %d\n",a,b,c);	
	}	
	else 
	printf ("Error");
}
