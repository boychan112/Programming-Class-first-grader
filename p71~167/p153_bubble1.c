//함수 p153_bubble1
#include <stdio.h>
#define NO 10

void swap (int *x, int *y) {
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
} 

void main() {
	int i, j, s[NO];
	
	srand(time(NULL));
	printf("발생된 난수 => ");
	for(i=0;i<NO;i++) {
		s[i]=1+rand()%100;
		printf("%3d,", s[i]);
	}
	
	for(i=NO-1;i>=0;i--)
		for(j=0;j<i;j++)
			if(s[j]>s[j+1])
				swap(&s[j], &s[j+1]);
	printf("\b \n정렬된 난수 => ");
	for(i=0; i<NO; i++)
		printf("%3d,", s[i]);
		printf("\b ");
}
 
