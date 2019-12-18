//∏≈≈©∑Œ p160_macrom2.c
#include <stdio.h>
#define SQUARE(x) x*x
#define PR(x) printf("X is %d.\n", x)

main() {
	int x = 4;
	int y;
	
	y=SQUARE(x);
	PR(y);
	y=SQUARE(2);
	PR(y);
	PR(SQUARE(x));
} 
