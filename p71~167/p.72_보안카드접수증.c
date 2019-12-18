//72.보안 카드 접수증.c
#include <stdio.h>
main()
{
	char a[30];
	int b;
	char c;
	float d;
	
	printf ("이름을 입력하세요: ");
	scanf ("%s", &a);
	printf ("나이를 입력하세요: ");
	scanf ("%d", &b);
	getchar();
	printf ("부서코드를 입력하세요: ");
	scanf ("%c", &c);
	printf ("보안키를 입력하세요: ");
	scanf ("%f", &d);
	
	printf ("***************************\n");
	printf ("이름: %s\n",a);
	printf ("나이: %d\n",b);
	printf ("부서코드: %c\n",c);
	printf ("보안키: %f\n",d);
	printf ("***************************\n");
	
 } 
