//p109_gugudan
#include <stdio.h>
main()
{
	int a,b,c; 
	printf ("출력할 구구단은? ");
	
	scanf ("%d", &a);	
	
	for (b=1;b<=9;b++)
	{
		c=a*b;
		printf ("%d x %d = %d\n",a,b,c);	
	}	
}
