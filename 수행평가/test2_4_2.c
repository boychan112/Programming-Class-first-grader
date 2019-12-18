#include <stdio.h>
main()
{
	int n, i, score, s1, s2;
	char ch;
	
	printf("첫 번째 점수 => ");
	score=0;
	for(n=0; n<=1; n++) {
		for(i=0; i<=1; i++) {
			do {
				ch=getch();
				}while((ch<'0'||ch>'9')&&ch!=13);
			if(i==0&&(ch=='0'||ch==13)) {
				putchar('0');
				break;
				}
			else if(ch>='0'&&ch<='9'){
				score=score*10+ch-'0';
				putchar(ch);
				}
			}
		if(score==10) {
			do {
				ch=getch();
				}while(ch!='0'&&ch!=13);
			if(ch=='0') {
				score=100;
				putchar(ch);
			}	
		}
		if(n==0) {
			s1=score;
			score=0;
			printf("\n두 번째 점수 => ");
		}	
		else s2=score; 
	}
	printf("\n두 수 사이의 정수 => ");
	for(i=s1+1; i<s2; i++) 
		printf("%d, ", i);
		printf("\b\b ");
	
}
