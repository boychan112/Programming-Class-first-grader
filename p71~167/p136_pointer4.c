//문자열과 포인터의 관계(p136_pointer4) 
#include <stdio.h>
main()
{
	int i, j;
	char sa[5][10]={"use", "mouse", "printer",
					"computer", "processor"};
	char *sp[5]={"use", "mouse", "printer",
					"computer", "processor"};
	
	printf("=== 일반 배열 ===\n");
	for(i=0;i<5;i++)
		printf("sa[%d] : %d, %s\n", i,sa[i],sa[i]);
		
	printf("\n=== 포인터 배열 ===\n");
	for(i=0;i<5;i++)
		printf("sp+%d : %d, %s\n", i, sp[i],sp[i]);
}
