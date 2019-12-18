//p.92_switch2.c
#include <stdio.h>
main()
{
	int score;
	
	printf("평가 점수=> ");
	scanf("%d", &score);
	printf ("성취 결과=> ");
	
	switch(score) {
		case 100: 
		case 90: printf ("A등급입니다.\n");
				 break;
		case 80: printf ("B등급입니다.\n");
				 break;
		case 70: printf ("C등급입니다.\n");
				 break;
		case 60: printf ("D등급입니다.\n");
			   	 break;
		default: printf ("없습니다\n");		
	} 
		return 0;
}
