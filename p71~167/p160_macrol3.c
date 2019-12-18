//매크로 p160_macrol3
#include <stdio.h>
#define SQUARE(x) x*x
#define PR(x) printf("x is %d.\n", x)

main() {
	int y = 4;
	
	PR(SQUARE(y+2)); //SQUARE(y+2*y+2) 
	PR(100/SQUARE(2)); //100/2*2
	PR(SQUARE(++y)); //인수로 증감 연산자 자제 
}
