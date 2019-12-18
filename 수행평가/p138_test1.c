#include <stdio.h>
#define NO 10
//대문자 65~90, 소문자 97~122 
main() {
	int i, j, asc, small, big, last, temp;
	char sm[NO], bg[NO];
	
	small=big=0;
	srand(time(NULL));
	printf("\n생성된 문자 => ");
	for(i=0;i<NO;i++) {
		do {
			asc=65+rand()%58;
		}while((asc>90)&&(asc<97));
		if(asc>=97) 
			sm[small++]=asc;
		else 
			bg[big++]=asc;
	}
	printf("\b\b ");
	sm[small]=bg[big]=NULL;
	
	printf("\n\n===정렬 전===");
	printf("\n대문자(%2d)개 => ", big);
	for(i=0;i<big;i++)
		printf("%c, ", bg[i]);
		printf("\b\b "); 
	printf("\n소문자(%2d)개 => ", small);
	for(i=0;i<small;i++)
		printf("%c, ", sm[i]);
		printf("\b\b "); 
	
	last=big-1;
	for(i=last;i>=0;i--)
		for(j=0;j<i;j++)
			if(bg[j]>bg[j+1]) {
				temp=bg[j];
				bg[j]=bg[j+1];
				bg[j+1]=temp;
			}
	last=small-1;
	for(i=last;i>=0;i--)
		for(j=0;j<i;j++)
			if(sm[j]>sm[j+1]) {
				temp=sm[j];
				sm[j]=sm[j+1];
				sm[j+1]=temp;
			}
	printf("\n\n=== 정렬 후===");
	printf("\n대문자(%2d)개 => ", big);
	for(i=0;i<big;i++)
		printf("%c, ", bg[i]);
		printf("\b\b "); 
	printf("\n소문자(%2d)개 => ", small);
	for(i=0;i<small;i++)
		printf("%c, ", sm[i]);
		printf("\b\b "); 
	
}

