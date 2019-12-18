//매크로 p160_macro5.c
#include <stdio.h>
#define MAX(a,b) ((a>b) ? (a) : (b)) //x y  
#define ABS(a) ((a) < 0? -(a) : (a)) //x

main() {
	int a, b, c;
	
	printf("두 숫자를 입력하시오 => ");
	scanf("%d %d", &a, &b);
	printf("절댓값을 구할 숫자를 입력하시오 => ");
	scanf("%d", &c);
	printf("------------------------------------\n");
	printf("큰 수는 %d입니다.\n", MAX(a,b));
	printf("%d의 절댓값은 %d입니다.", c, ABS(c));
} 
