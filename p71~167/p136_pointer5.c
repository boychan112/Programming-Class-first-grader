//p136_pointer5
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
		printf("%s => %c, %c\n", sa[i], sa[i][0], sa[i][1]);
		
	printf("\n=== 포인터 배열 ===\n");
	for(i=0;i<5;i++)
		printf("%s => %c, %c\n", sp[i], *(sp[i]+0), *(sp[i]+1));
}
