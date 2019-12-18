//1~9 사이의 난수 10개를 발생시켜 배열에 저장한 후, 입력한 숫자를 검색하여 배열에서의 위치를 출력하시오. (p138_41linear1.c)
#include <stdio.h>
#include <time.h>
#define NO 10
main()
{
	int s, i, n[NO], flag=0; //search - 검색 / i = 증가하는 값 / n = 난수 
	
	srand(time(NULL));
	printf("검색할 숫자를 정수로 입력하시오 : ");
	s = getche() - '0';
	
	for(i=0;i<NO;i++)
	{
		n[i]=1+rand()%9;
	}
	
	for(i=0;i<NO;i++)
		if(s==n[i])
		{
			printf("\n%d는(은) 배열의 %d번째에 위치합니다.", s, i+1);
			flag=1;
			break;
		}
		if(flag==0) 		
			printf("\n입력한 자료가 존재하지 않습니다.");
			printf("\n난수 => ");
	for(i=0;i<NO;i++)
		printf("%2d ", n[i]); 
}

