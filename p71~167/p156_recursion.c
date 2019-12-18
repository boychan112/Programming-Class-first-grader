//스타 출력1(p156_recursion)
#include <stdio.h>

int f(int n) {
	if(n>0) {
		f(n-1);
		printf("*"); 		
	}
} 

main() {
	int n;
	
	printf("출력할 별의 개수는? => ");
	scanf("%d", &n);
	f(n);
}
