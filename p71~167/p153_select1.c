//함수 p153_select1
#include <stdio.h>
#define NO 10

void swap(int *x,int *y) {
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
	
}

void main() {
	int i, j, s[NO], b, a;
	
	srand(time(NULL));
	printf("발생된 난수 => ");
	for(i=0;i<NO;i++) {
		s[i]=1+rand()%100;
		printf("%3d", s[i]);
	}
	
	for(i=0; i<NO-1; i++) //버블 sort 
		for(j=i+1;j<NO;j++) 
			if(s[i]>s[j]) 
				swap(&s[i],&s[j]);			
	printf("\b \n정렬된 난수 =>");
	for(i=0;i<NO;i++)
		printf("%3d", s[i]);
		printf("\b"); 
}
